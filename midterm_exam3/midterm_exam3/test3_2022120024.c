#include <stdio.h>

double ReLU(double num) {
	double result = (num >= 0 ? num : 0);	//���׿����� ��� : f(y) = y(y>=0), f(y) = 0(y<0)
	return result;							//result�� ��ȯ
}

double leaky_ReLU(double num, double a) {
	double result = (num >= 0 ? num : a * num);	//���׿����� ��� : f(y) = y(y>=0), f(y) = ay(y<0)
	return result;								//result�� ��ȯ
}

int main(void) {
	double num;
	double a = 0.1;								//leaky ReLU �Լ��� �� a = 0.1
	printf("���ڸ� �Է��ϼ��� : ");				//���� �Է�
	scanf_s("%lf", &num);						//�Է��� ���ڸ� �Ǽ������� num�� ����

	double result1 = ReLU(num);					//ReLU �Լ� ȣ��, result1�� �� ����
	printf("ReLU : %.2lf\n", result1);			

	double result2 = leaky_ReLU(num, a);		//leaky_ReLU �Լ� ȣ��, result2�� �� ����
	printf("leaky_ReLU : %.2lf\n", result2);
}