#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	srand(time(NULL));
	int num1, num2;
	printf("a 값을 입력하세요 : ");
	scanf_s("%d", &num1);
	printf("b 값을 입력하세요 : ");
	scanf_s("%d", &num2);

	double x=0, y=0;
	double j = 0;
	for(int i = 0; i < 10000; i++) {
		x = num1 * (double)rand() / (double)RAND_MAX;
		y = num2 * (double)rand() / (double)RAND_MAX;
		if (sqrt(pow(x, 2.0) + pow(y, 2.0)) <= num1 * num2) {
			j++;
		}
	}
	printf("타원의 넓이 : %lf", j / 10000 * num1 * num2);
}