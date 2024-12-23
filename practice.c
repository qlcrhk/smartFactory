//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	/*
//	//요청 1
//
//	//	저는 건립된지 10년된 Farm Company의 대리입니다.
//	//	회사 이름은 절대 바뀔 일은 없구요(상수)
//	//	변수에 값을 직원의 이름과 직급을 넣고 출력해 보세요
//
//	const char COMPANY_NAME[255] = "Farm company";
//	char coworker_name[255] = "yoon";
//	char coworker_level[255] = "대리";
//
//	printf("당신의 회사 명: %s\n 직원: %s %s \n\n", COMPANY_NAME,coworker_name, coworker_level );
//
//	//	요청2
//
//	//	이름과 나이를 사용자가 입력하고 oo님 안녕하세요.
//	//	당신의 나이는 oo세 이시군요!
//	//	를 출력해보세요
//
//	int user_age;
//	char user_name[255];
//
//	printf("당신의 이름을 입력해 주세요");
//	scanf_s("%s", user_name, sizeof(user_name));
//	printf("당신의 나이를 입력해주세요");
//	scanf_s("%d", &user_age);
//
//	printf("안녕하세요 %s님 당신의 나이는 %d세 이시군요!",user_name, user_age);
//
//		//	요청 3
//		//	키와 몸무게를 변수에 저장하여 소수점 두자리 수까지 나타내세요.
//		//	이때 데이터 타입이 서로 달라야합니다.
//	
//		float user_height = 175.555;
//		double user_weight = 999.999;
//
//		printf("당신의 키는 %.2f cm\n", user_height);
//		printf("당신의 몸무게는 %.2lf", user_weight);
//	*/
//
//	//피라미드 별찍기
//	//int floor;
//	//printf("몇층?");
//	//scanf_s("%d", &floor);
//	//for (int i = 0;i < floor; i++) {
//	//	for (int j = i; j < floor -1 ; j++) {
//	//		printf(" ");
//	//	}
//
//	//	for (int k = 0;k < i*2 + 1; k++) {
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//	//요청2
//
//	//int my_money = 500;
//	//switch (my_money)
//	//{
//	//case 1000:
//	//	printf("1000원 상품 구매 가능\n");
//	//	
//	//case 500:
//	//	printf("500원 상품 구매 가능\n");
//	//case 100:
//	//	printf("100원 상품 구매 가능\n");
//
//	//case 50:
//	//	printf("50원 상품 구매 가능\n");
//	//case 10:
//	//	printf("10원 상품 구매 가능\n");
//	//default:
//	//	break;
//	//}
//
//	char cal_power[255];
//	int cal_menu,num1,num2,result;
//	printf("계산기를 켤까요 예(y 또는 Y) 아니요(아무거나 입력)");
//	scanf_s("%s", cal_power, sizeof(cal_power));
//
//	while (strcmp(cal_power, "y") == 0 || strcmp(cal_power, "Y") == 0) {
//		printf("active\n");
//		printf("1번 더하기 \n2번 빼기 \n3번 곱하기 \n4. 나누기 \n종료:ctrl + c\n\n");
//		scanf_s("%d", &cal_menu);
//		switch (cal_menu) {
//		case 1:
//			printf("첫 번째 숫자를 입력하세요: ");
//			scanf_s("%d", &num1);
//			printf("두 번째 숫자를 입력하세요: ");
//			scanf_s("%d", &num2);
//			result = num1 + num2;
//			printf("결과: %d\n", result);
//			break;
//		case 2:
//			printf("첫 번째 숫자를 입력하세요: ");
//			scanf_s("%d", &num1);
//			printf("두 번째 숫자를 입력하세요: ");
//			scanf_s("%d", &num2);
//			result = num1 - num2;
//			printf("결과: %d\n", result);
//			break;
//		case 3:
//			printf("첫 번째 숫자를 입력하세요: ");
//			scanf_s("%d", &num1);
//			printf("두 번째 숫자를 입력하세요: ");
//			scanf_s("%d", &num2);
//			result = num1 * num2;
//			printf("결과: %d\n", result);
//			break;
//		case 4:
//			printf("첫 번째 숫자를 입력하세요: ");
//			scanf_s("%d", &num1);
//			printf("두 번째 숫자를 입력하세요: ");
//			scanf_s("%d", &num2);
//			if (num2 != 0) {
//				double division_result = (double)num1 / num2;
//				printf("결과: %.2f\n", division_result);
//			}
//			else {
//				printf("0으로 나눌 수 없습니다.\n");
//			}
//			break;
//
//		}
//	}
//	return 0;
//}