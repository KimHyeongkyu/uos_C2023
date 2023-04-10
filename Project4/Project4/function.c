# include <stdio.h>

int common_multiple(int a, int b) {                    //두 수의 최소공약수를 구하는 함수 만들기
	for (int num = 1; num <= a * b; num++) {
		if (num % a == 0 && num % b == 0) {
			printf("%d와 %d의 최소공배수는 %d입니다.\n", a, b, num);
			return 0;
		}
	}
}

int common_divisor(int a, int b) {                     //두 수의 최대공배수를 구하는 함수 만들기
	for (int num = a * b; num > 1; num--) {
		if (a % num == 0 && b % num == 0) {
			printf("%d와 %d의 최대공약수는 %d입니다.\n", a, b, num);
			return 0;
		}
	}
}

int prime_discriminator(int a) {                        //한 수가 소수인지를 판별하는 함수 만들기
	int count = 0;
	for (int i = 2; i < a ; i++) {	
		if (a % i == 0) {
			count++;
		}		
	}
	if (count > 2) {
		printf("%d는 소수가 아닙니다.\n", a);
	}
	else {
		printf("%d는 소수입니다.\n", a);
	}
}