#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {

	int choose, chooseP, chooseT, chooseC, side1, side2, radius;

	setlocale(LC_ALL, "Ru");
	printf("����� ����������!");
	Sleep(500);
	system("cls");
	printf("��������...");
	Sleep(500);
	system("cls");
	while (1) {
		printf("����� ������:\n 1. �������������\n 2. �����������\n 3. ����\n 0. �����");
		scanf_s("%d", &choose);

		switch (choose) {
		case 1:
			system("cls");
			printf("������� 2 �������: ");
			scanf_s("%d %d", &side1, &side2);
			system("cls");
			printf("����:\n 1. ������� ��������������\n 2. �������� ��������������\n 3. ��������� ��������������\n 4. ��������� � ������ ������\n 0. �����\n");
			scanf_s("%d", &chooseP);
		case 2:
			system("cls");
			printf("������� 2 �������");
			scanf_s("%d %d", &side1, &side2);
			system("cls");
			printf("����:\n 1. ������� ������������\n 2. �������� ������������\n 3. ��������� ������������\n 4. ��������� � ������ ������\n 0. �����");
			scanf_s("%d", &chooseT);
		case 3: 
			system("cls");
			printf("������� ������");
			scanf_s("%d", &radius);
			system("cls");
			printf("����:\n 1. ������� �����\n 2. ����� �����\n 3. ������� �����\n 4. ��������� � ������ ������\n 0. �����");
			scanf_s("%d", &chooseC);
		case 4:
			continue;
		}

		switch (chooseP) {
		case 1:
			printf("������� ��������������: %d\n", side1 * side2);
			break;
		case 2:
			printf("�������� ��������������: %d\n", 2 * side1 + 2 * side2);
			break;
		case 3:
			printf("��������� ��������������: %d\n", sqrt(side1 * side1 + side2 * side2));
			break;
		case 4:
			continue;
		}

		switch (chooseT) {
		case 1:
			printf("������� ������������: %d\n", side1 * side2 * 0.5);
			break;
		case 2:
			printf("�������� ������������: %d\n", side1 + side2 + sqrt(side1 * side1 + side2 * side2));
			break;
		case 3:
			printf("��������� ������������: %d\n", sqrt(side1 * side1 + side2 * side2));
			break;
		case 4:
			continue;
		}

		switch (chooseC) {
		case 1:
			printf("������� �����: %d\n", 3.14 * radius * radius);
			break;
		case 2:
			printf("����� �����: %d\n", 2 * 3.14 * radius);
			break;
		case 3:
			printf("��������� ������������: %d\n", radius + radius);
			break;
		case 4:
			continue;
		}

	}




	system("pause");
	return 0;
}