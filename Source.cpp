#include <stdio.h>
#include <conio.h>

int main() {
	int a;
	int b;

	printf("a: ");
	scanf_s("%d", &a);

	printf("b: ");
	scanf_s("%d", &b);

	if (a == 0) {
		if (b == 0) {
			printf("Phuong trinh co vo so nghiem\n");
		}
		else {
			printf("Phuong trinh vo nghiem\n");
		}
	}
	else {
		float x = (float)-b / a;
		printf("Phuong trinh co nghiem la: %0.4f\n", x);
	}
	_getch();
}