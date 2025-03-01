# G.P.C - Good Product Catcher

## 🚀 프로젝트 개요  
자동화된 시스템을 통해 물품의 위치를 파악하여 로봇팔이 물품을 컨베이어 벨트에 올린 후, 물품의 모양과 색상을 구분하여 양질의 제품을 선별하는 프로젝트입니다.  
**로봇, 인공지능(AI), 자동화 시스템** 등을 활용하여 작업의 **효율성과 정확성**을 극대화합니다.

---

## 📂 주요 기술
- **YOLOv5**
  - 물체를 인식하고 모양과 색상을 구분
  - 정확한 객체 탐지 및 분류를 위한 AI 모델 사용
- **라즈베리파이**
  - 객체 인식 시스템 구현
  - YOLOv5와의 통합을 통해 데이터 분석 및 처리
- **ESP32**
  - 센서 제어 및 로봇팔 동작 연계
  - 물품 선별 과정에서 다양한 데이터 수집 및 처리
- **Altium Designer**
  - 로봇팔 제어 회로 설계
  - 회로 안정성 및 효율성을 극대화

---

## 🛠 팀 구성
- **김무정**: 프로젝트 멘토  
- **김성현**: 라즈베리파이를 통한 객체 인식 및 AI 통합  
- **박성윤**: 회로 설계 및 ESP32 기반 센서 제어  

---

## ⚙️ 시스템 작동 흐름
1. **물체 탐지**: YOLOv5를 활용하여 물체를 탐지하고 모양 및 색상 구분  
2. **데이터 처리**: 라즈베리파이를 통해 탐지된 정보를 분석하여 필요한 제어 신호 생성  
3. **로봇팔 동작**: ESP32가 수신한 신호에 따라 로봇팔이 물품을 컨베이어 벨트로 전달  
4. **결과 출력**: 컨베이어 벨트에서 물품을 검사하여 양질의 제품만 골라내고, 모터를 통해 이를 선별  

---

## 📜 프로젝트 목표
- 불량품을 정확히 탐지하고 제거  
- 물품 분류 및 이동의 효율성을 높임  
- AI 및 자동화 기술을 활용하여 품질 관리 자동화  

---

