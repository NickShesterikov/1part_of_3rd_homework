#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

	setlocale(LC_ALL, "Ru");

	int sum = 0;
	int length, number;

	printf("Количество элементов: ");
	scanf_s("%d", &length);
	printf("\n");
	printf("Вводите элементы: ");
	for (int i = 0; i < length; i++) {
	
		scanf_s("%d", &number);
		sum += Square(number);
	}

	printf("Сумма квадратов равна: %d \n", sum);
	system("pause");
	return 0;
}

int Square(int a) {
	return abs(a) * abs(a);
}