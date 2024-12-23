#include <stdio.h>
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

void animal() {
	printf("悼拱\n");
}

void animal_sound(char a[255]) {
	if (a == "dog") {
		printf("港港\n");
	}
	else if (a == "cat") {
		printf("农窍厩\n");
	}
	else {
		printf("构夸\n");
	}
}
int numb() {
	return 100;
}
int animal_couut(int dog_count, int cat_count) {
	return dog_count + cat_count;
}
int main(void) {
	
	//animal();
	//printf("俺家府");
	//animal_sound("dog");
	//animal_sound("cat");
	//animal_sound("bear");

	//printf("%d", animal_couut(numb(), 10));

	//int arr[] = { 1,2,4,5,6,6,7 };
	//printf("%d", arr[1]);

	//for (int i = 0; i < ARRAY_LENGTH(arr); i++) {
	//	printf("%d", arr[i]);
	//}

	/*int arr2[3][3] = { {1, 2, 3}, {1, 2, 3}, {1, 2, 3} };
	printf("Element at arr[1][2] = %d\n", arr2[1][2]);

	int arr3[2][3][4] = {
		{
			{1, 2, 3, 4},
			{5, 6, 7, 8},
			{9, 10, 11, 12}
		},
		{
			{13, 14, 15, 16},
			{17, 18, 19, 20},
			{21, 22, 23, 24}
		}
	};

	printf("Element at arr[0][1][2] = %d\n", arr3[0][1][2]);*/

	//器牢磐
	int num = 10;

	printf("%d\n", &num);

	int *pNum2;
	int num2 = 10;

	pNum2 = &num2;
	printf("%d\n", &num2);
	printf("%d\n", pNum2);

	printf("%d\n", *pNum2);

	*pNum2 = 200;
	printf("%d\n", num2);




	return 0;
}