#include<stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	for (int i = 1; i < a; i++) {
		for (int j = a - i; j < a; j++) {
			printf("*");
		}
		for (int j = a * 2 - 1 - i * 2; j > 0; j--) {
			printf(" ");
		}
		for (int j = a - i; j < a; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < a * 2 - 1; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1; i < a; i++) {
		for (int j = a - i; j > 0; j--) {
			printf("*");
		}
		for (int j = -1 + i * 2; j > 0; j--) {
			printf(" ");
		}
		for (int j = a - i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}