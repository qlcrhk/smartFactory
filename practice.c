//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	/*
//	//��û 1
//
//	//	���� �Ǹ����� 10��� Farm Company�� �븮�Դϴ�.
//	//	ȸ�� �̸��� ���� �ٲ� ���� ������(���)
//	//	������ ���� ������ �̸��� ������ �ְ� ����� ������
//
//	const char COMPANY_NAME[255] = "Farm company";
//	char coworker_name[255] = "yoon";
//	char coworker_level[255] = "�븮";
//
//	printf("����� ȸ�� ��: %s\n ����: %s %s \n\n", COMPANY_NAME,coworker_name, coworker_level );
//
//	//	��û2
//
//	//	�̸��� ���̸� ����ڰ� �Է��ϰ� oo�� �ȳ��ϼ���.
//	//	����� ���̴� oo�� �̽ñ���!
//	//	�� ����غ�����
//
//	int user_age;
//	char user_name[255];
//
//	printf("����� �̸��� �Է��� �ּ���");
//	scanf_s("%s", user_name, sizeof(user_name));
//	printf("����� ���̸� �Է����ּ���");
//	scanf_s("%d", &user_age);
//
//	printf("�ȳ��ϼ��� %s�� ����� ���̴� %d�� �̽ñ���!",user_name, user_age);
//
//		//	��û 3
//		//	Ű�� �����Ը� ������ �����Ͽ� �Ҽ��� ���ڸ� ������ ��Ÿ������.
//		//	�̶� ������ Ÿ���� ���� �޶���մϴ�.
//	
//		float user_height = 175.555;
//		double user_weight = 999.999;
//
//		printf("����� Ű�� %.2f cm\n", user_height);
//		printf("����� �����Դ� %.2lf", user_weight);
//	*/
//
//	//�Ƕ�̵� �����
//	//int floor;
//	//printf("����?");
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
//	//��û2
//
//	//int my_money = 500;
//	//switch (my_money)
//	//{
//	//case 1000:
//	//	printf("1000�� ��ǰ ���� ����\n");
//	//	
//	//case 500:
//	//	printf("500�� ��ǰ ���� ����\n");
//	//case 100:
//	//	printf("100�� ��ǰ ���� ����\n");
//
//	//case 50:
//	//	printf("50�� ��ǰ ���� ����\n");
//	//case 10:
//	//	printf("10�� ��ǰ ���� ����\n");
//	//default:
//	//	break;
//	//}
//
//	char cal_power[255];
//	int cal_menu,num1,num2,result;
//	printf("���⸦ �ӱ�� ��(y �Ǵ� Y) �ƴϿ�(�ƹ��ų� �Է�)");
//	scanf_s("%s", cal_power, sizeof(cal_power));
//
//	while (strcmp(cal_power, "y") == 0 || strcmp(cal_power, "Y") == 0) {
//		printf("active\n");
//		printf("1�� ���ϱ� \n2�� ���� \n3�� ���ϱ� \n4. ������ \n����:ctrl + c\n\n");
//		scanf_s("%d", &cal_menu);
//		switch (cal_menu) {
//		case 1:
//			printf("ù ��° ���ڸ� �Է��ϼ���: ");
//			scanf_s("%d", &num1);
//			printf("�� ��° ���ڸ� �Է��ϼ���: ");
//			scanf_s("%d", &num2);
//			result = num1 + num2;
//			printf("���: %d\n", result);
//			break;
//		case 2:
//			printf("ù ��° ���ڸ� �Է��ϼ���: ");
//			scanf_s("%d", &num1);
//			printf("�� ��° ���ڸ� �Է��ϼ���: ");
//			scanf_s("%d", &num2);
//			result = num1 - num2;
//			printf("���: %d\n", result);
//			break;
//		case 3:
//			printf("ù ��° ���ڸ� �Է��ϼ���: ");
//			scanf_s("%d", &num1);
//			printf("�� ��° ���ڸ� �Է��ϼ���: ");
//			scanf_s("%d", &num2);
//			result = num1 * num2;
//			printf("���: %d\n", result);
//			break;
//		case 4:
//			printf("ù ��° ���ڸ� �Է��ϼ���: ");
//			scanf_s("%d", &num1);
//			printf("�� ��° ���ڸ� �Է��ϼ���: ");
//			scanf_s("%d", &num2);
//			if (num2 != 0) {
//				double division_result = (double)num1 / num2;
//				printf("���: %.2f\n", division_result);
//			}
//			else {
//				printf("0���� ���� �� �����ϴ�.\n");
//			}
//			break;
//
//		}
//	}
//	return 0;
//}