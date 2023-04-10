# include <stdio.h>

int common_multiple(int a, int b) {                    //�� ���� �ּҰ������ ���ϴ� �Լ� �����
	for (int num = 1; num <= a * b; num++) {
		if (num % a == 0 && num % b == 0) {
			printf("%d�� %d�� �ּҰ������ %d�Դϴ�.\n", a, b, num);
			return 0;
		}
	}
}

int common_divisor(int a, int b) {                     //�� ���� �ִ������� ���ϴ� �Լ� �����
	for (int num = a * b; num > 1; num--) {
		if (a % num == 0 && b % num == 0) {
			printf("%d�� %d�� �ִ������� %d�Դϴ�.\n", a, b, num);
			return 0;
		}
	}
}

int prime_discriminator(int a) {                        //�� ���� �Ҽ������� �Ǻ��ϴ� �Լ� �����
	int count = 0;
	for (int i = 2; i < a ; i++) {	
		if (a % i == 0) {
			count++;
		}		
	}
	if (count > 2) {
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", a);
	}
	else {
		printf("%d�� �Ҽ��Դϴ�.\n", a);
	}
}