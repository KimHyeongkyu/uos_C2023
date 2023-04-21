#include <stdio.h>
#include <time.h>

int main(void) {
	time_t t;
	t = time(NULL);

	printf("현재 시간 : %lld년 %lld월 %lld일\n", t / 60 / 60 / 24 / 365 + 1970, (t / 60 / 60 / 24)%12);	//현재 시간(년, 월)까지 계산

	printf("1970년 1월 1일 0시 0분 0초를 기준으로\n");
	printf("경과 일 : %lld일\n", t / 60 / 60 / 24);
	printf("경과 시간 : %lld시간\n", t / 60 / 60);
	printf("경과 분 : %lld분\n", t / 60 );
	printf("경과 초 : %lld초\n", t);
}