# include <stdio.h>
//2022120024 김형규 과제2-1 제출
int loop(int n, int m) {
    if (n > 1) loop(n / m, m);   //재귀함수 형식, 각 실행마다 한 자리씩 완성
    printf("%d", n % m);    //진법 변환기 완성
}


int main() {
    int num1;   //int형 num1 선언
    int num2;   //int형 num2 선언
    printf("변환할 10진수 숫자 입력 : ");
    scanf_s("%d", &num1);            // 입력한 숫자를 num1로 저장(변환할 숫자)
    printf("변환할 진법 입력 (2~9) : ");
    scanf_s("%d", &num2);            // 입력한 숫자를 num2로 저장(변환할 진법)

    if (num2 < 2 || num2 > 9) {
        printf("변환할 진법으로는 2부터 9 사이의 정수를 입력하시오."); 
    }   //에러 상황(2~9 밖의 숫자) 발생시 출력 문구

    else {   //에러가 발생하지 않는다면
        printf("결과 : ");
        loop(num1, num2); // 결과 출력
    }
}