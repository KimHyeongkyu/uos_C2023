#include <stdio.h>

int main(void) {
	char name[10];
	char grade;
	int birth, stud_num;
	char major[50];

	printf("이름을 입력하세요 : ");
	scanf_s("%s", &name, (int)sizeof(name));	//scanf_s 함수를 이용하여 char[] 형식으로 이름 받기

	printf("희망학점을 입력하세요 : ");
	scanf_s(" %c", &grade);						//scanf_s 함수를 이용하여 char 형식으로 희망학점 받기, 화이트 스페이스 사용

	printf("생년월일을 입력하세요 : ");
	scanf_s("%d", &birth);						//scanf_s 함수를 이용하여 int 형식으로 생년월일 받기

	printf("학번을 입력하세요 : ");
	scanf_s("%d", &stud_num);					//scanf_s 함수를 이용하여 int 형식으로 학번 받기

	printf("학과명을 입력하세요 : ");
	scanf_s("%s", &major, (int)sizeof(major));	//scanf_s 함수를 이용하여 char[] 형식으로 학과명 받기

	printf("이름 : %s\n", name);
	printf("희망학점 : %c\n", grade);
	printf("생년월일 : %d\n", birth);
	printf("입학년도 : %d\n", stud_num / 1000000);	//10자리의 학번을 10^6로 나누면 앞자리 4자리만 남음
	printf("학과명 : %s\n", major);


}