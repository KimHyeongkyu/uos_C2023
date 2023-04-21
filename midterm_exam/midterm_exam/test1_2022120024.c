#include <stdio.h>

int googoodan(int num) {
	if (num < 2 || num >9) { 
		printf("2 ~ 9 사이의 숫자를 입력하십시오.");
	}			// 예외 처리 부분
	else {
		for (int i = 1; i < 10; i++) {
			printf("%d X %d = %d\n", num, i, num * i);
		}
	}			//구구단 출력 구문
	return 0;
}

int main(void) {
	int num;
	printf("구구단 몇 단을 출력할까요? : ");	//num에 들어갈 값 입력
	scanf_s("%d", &num);						//입력한 값을 num에 저장
	googoodan(num);								//googoodan 함수 호출
}