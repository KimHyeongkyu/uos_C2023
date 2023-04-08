# include <stdio.h>
//2022120024 김형규 과제1 제출
int f(int n, int m) {
    if (n > 1) f(n/m ,m);   //재귀함수 형식, 각 실행마다 한 자리씩 실행
    printf("%d", n % m);    //진법 변환기 완성
}


int main() {
    int num1;
    int num2;
    printf("변환할 10진수 숫자 입력 : ");
    scanf_s("%d", &num1);            // 입력한 숫자를 num1로 저장
    printf("변환할 진법 입력 (2-9) : ");
    scanf_s("%d", &num2);            // 입력한 진법을 num2로 저장
    if (num2 < 2 || num2 >> 9) {
        printf("변환할 진법으로는 1부터 9 사이의 정수를 입력하시오."); //에러 상황 발생시
    }
    else {
        printf("결과 : ");
        f(num1, num2); // 결과 출력
    }
}