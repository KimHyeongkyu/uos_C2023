#include <stdio.h>
//2022120024 김형규 과제 제출
int main(void) {

	char name[15], major[30];
	int birthday = 0, student_num = 0;

	printf("본인의 이름 입력 : "); 
	scanf_s("%s", name, sizeof(name)); //입력한 이름을 scanf를 이용하여 저장하기

	printf("본인의 생년월일 입력 : ");
	scanf_s("%d", birthday); //입력한 생년월일을 scanf 함수를 이용하여 저장하기

	printf("본인의 학번 입력 : ");
	scanf_s("%d", student_num); //입력한 학번을 scanf 함수를 이용하여 저장하기

	printf("본인의 학과명 입력 : ");
	scanf_s("%s", major); //입력한 학과명을 scanf 함수를 이용하여 저장하기

	printf("\n\n이름 : %s\n", name);     //name에 저장된 이름 출력
	printf("생년월일 : %d\n", birthday); //birthday에 저장된 생일 출력
	printf("학번 : %d\n", student_num);  //student_num에 저장된 학번 출력
	printf("학과명 : %s\n", major);      //major에 저장된 학과명 출력

}