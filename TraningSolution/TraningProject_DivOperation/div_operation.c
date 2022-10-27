#include <stdio.h>
int main() {

	int a, b;
	float div;

	scanf_s("%d %d", &a, &b);

	if (b == 0) {
		printf("Divisor cant be 0!!!!");
	}
	else {
		div = a / b;
	}
	div = a / b;

	printf("%d", div);

	system("pause");
	return 0;
}