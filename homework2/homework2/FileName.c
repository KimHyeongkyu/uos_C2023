# include <stdio.h>

int f(int n, int m) {
    if (n > 1) f(n/m ,m); //재귀함수 형식
    printf("%d", n % m);  
}


int main() {
    int n;
    int m;
    printf("변환할 10진수 숫자 입력 : ");
    scanf_s("%d", &n);            // 변환할 숫자 입력
    printf("변환할 진법 입력 : ");
    scanf_s("%d", &m);
    if (m < 1 || m >> 9) {
        printf("변환할 진법으로는 1부터 9 사이의 숫자를 입력하시오.");
    }
    else {
        printf("결과 : ");
        f(n, m);
    }
}