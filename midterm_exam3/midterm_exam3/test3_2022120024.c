#include <stdio.h>

double ReLU(double num) {
	double result = (num >= 0 ? num : 0);	//삼항연산자 사용 : f(y) = y(y>=0), f(y) = 0(y<0)
	return result;							//result값 반환
}

double leaky_ReLU(double num, double a) {
	double result = (num >= 0 ? num : a * num);	//삼항연산자 사용 : f(y) = y(y>=0), f(y) = ay(y<0)
	return result;								//result값 반환
}

int main(void) {
	double num;
	double a = 0.1;								//leaky ReLU 함수의 값 a = 0.1
	printf("숫자를 입력하세요 : ");				//인자 입력
	scanf_s("%lf", &num);						//입력한 숫자를 실수형으로 num에 저장

	double result1 = ReLU(num);					//ReLU 함수 호출, result1에 값 저장
	printf("ReLU : %.2lf\n", result1);			

	double result2 = leaky_ReLU(num, a);		//leaky_ReLU 함수 호출, result2에 값 저장
	printf("leaky_ReLU : %.2lf\n", result2);
}