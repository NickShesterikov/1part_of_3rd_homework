#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {

	int choose, chooseP, chooseT, chooseC, side1, side2, radius;

	setlocale(LC_ALL, "Ru");
	printf("Добро пожаловать!");
	Sleep(500);
	system("cls");
	printf("Загрузка...");
	Sleep(500);
	system("cls");
	while (1) {
		printf("Выбор фигуры:\n 1. Прямоугольник\n 2. Треугольник\n 3. Круг\n 0. Выход");
		scanf_s("%d", &choose);

		switch (choose) {
		case 1:
			system("cls");
			printf("Введите 2 стороны: ");
			scanf_s("%d %d", &side1, &side2);
			system("cls");
			printf("Меню:\n 1. Площадь прямоугольника\n 2. Периметр прямоугольника\n 3. Диагональ прямоугольника\n 4. Вернуться к выбору фигуры\n 0. Выход\n");
			scanf_s("%d", &chooseP);
		case 2:
			system("cls");
			printf("Введите 2 стороны");
			scanf_s("%d %d", &side1, &side2);
			system("cls");
			printf("Меню:\n 1. Площадь треугольника\n 2. Периметр треугольника\n 3. Диагональ треугольника\n 4. Вернуться к выбору фигуры\n 0. Выход");
			scanf_s("%d", &chooseT);
		case 3: 
			system("cls");
			printf("Введите радиус");
			scanf_s("%d", &radius);
			system("cls");
			printf("Меню:\n 1. Площадь круга\n 2. Длина круга\n 3. Диаметр круга\n 4. Вернуться к выбору фигуры\n 0. Выход");
			scanf_s("%d", &chooseC);
		case 4:
			continue;
		}

		switch (chooseP) {
		case 1:
			printf("Площадь прямоугольника: %d\n", side1 * side2);
			break;
		case 2:
			printf("Периметр прямоугольника: %d\n", 2 * side1 + 2 * side2);
			break;
		case 3:
			printf("Диагональ прямоугольника: %d\n", sqrt(side1 * side1 + side2 * side2));
			break;
		case 4:
			continue;
		}

		switch (chooseT) {
		case 1:
			printf("Площадь треугольника: %d\n", side1 * side2 * 0.5);
			break;
		case 2:
			printf("Периметр треугольника: %d\n", side1 + side2 + sqrt(side1 * side1 + side2 * side2));
			break;
		case 3:
			printf("Диагональ треугольника: %d\n", sqrt(side1 * side1 + side2 * side2));
			break;
		case 4:
			continue;
		}

		switch (chooseC) {
		case 1:
			printf("Площадь круга: %d\n", 3.14 * radius * radius);
			break;
		case 2:
			printf("Длина круга: %d\n", 2 * 3.14 * radius);
			break;
		case 3:
			printf("Диагональ треугольника: %d\n", radius + radius);
			break;
		case 4:
			continue;
		}

	}




	system("pause");
	return 0;
}