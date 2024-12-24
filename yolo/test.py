import cv2
import yaml
from ultralytics import YOLO

# 학습시킨 모델 로드
model = YOLO('best.pt')  # 'yolov5n.pt', 'yolov5s.pt' 등 사용 가능

# data.yaml 파일에서 클래스 정보 로드
yaml_file_path = "data.yaml"
with open(yaml_file_path, 'r') as file:
    data = yaml.safe_load(file)

# data.yaml 파일에서 class_names을 읽어옴
class_names = data['names']  # class_names이 'names'로 되어 있는지 확인

print("Classes loaded from data.yaml:", class_names)

# 필터링할 클래스 설정 (circle, rectangle만 인식)
CLASS_FILTER = ['circle', 'rectangle']

def process_frame(frame):
    # YOLOv5로 객체 탐지
    results = model(frame, verbose=False)

    # 결과 시각화
    for result in results[0].boxes:
        cls = int(result.cls.numpy()[0])  # 클래스 인덱스 추출

        # 클래스 인덱스가 class_names의 범위 내에 있는지 확인
        if cls <= len(class_names):
            class_name = class_names[cls]
            if class_name in CLASS_FILTER:  # 필터링된 클래스만 처리
                x1, y1, x2, y2 = map(int, result.xyxy.numpy()[0])
                conf = result.conf.numpy()[0]
                label = f"{class_name} {conf:.2f}"

                # 경계 상자 그리기
                cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)
                cv2.putText(frame, label, (x1, y1 - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
        else:
            print(f"Warning: Class index {cls} is out of range for class_names.")

    return frame

def main():
    cap = cv2.VideoCapture(0)  # 웹캠 열기 (기본 장치)
    if not cap.isOpened():
        print("웹캠을 열 수 없습니다.")
        return

    while True:
        ret, frame = cap.read()
        if not ret:
            break

        # 프레임 처리
        frame = process_frame(frame)

        # 결과 표시
        cv2.imshow("YOLOv8 Real-Time Detection", frame)

        # 'q'를 눌러 종료
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    cap.release()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    main()
