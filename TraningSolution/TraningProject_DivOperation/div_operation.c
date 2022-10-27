#include <stdio.h>
int main() {

	int a, b;
	float div;

	printf("Enter numbers: \n");
	scanf_s("%d %d", &a, &b);

	if (b == 0) {
		printf("Divisor cant be 0!!!!\n");
	}
	else {

		if (a == 0 && b < 0) {
			div = 0
		}
		else {
			div = a / b;
		}
		
	}
	

	printf("a / b = %d", div);

	system("pause");
	return 0;
}