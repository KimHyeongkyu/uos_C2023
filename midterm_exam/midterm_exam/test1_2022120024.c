#include <stdio.h>

int googoodan(int num) {
	if (num < 2 || num >9) { 
		printf("2 ~ 9 ������ ���ڸ� �Է��Ͻʽÿ�.");
	}			// ���� ó�� �κ�
	else {
		for (int i = 1; i < 10; i++) {
			printf("%d X %d = %d\n", num, i, num * i);
		}
	}			//������ ��� ����
	return 0;
}

int main(void) {
	int num;
	printf("������ �� ���� ����ұ��? : ");	//num�� �� �� �Է�
	scanf_s("%d", &num);						//�Է��� ���� num�� ����
	googoodan(num);								//googoodan �Լ� ȣ��
}