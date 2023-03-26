#include <stdio.h>
int main(void) {
	//2022120024 김형규 과제 제출
	char name[15], major[30]; //이름과 전공에 대한 변수 선언
	int birth, stud_num; //생일과 학번에 대한 변수 선언

	printf("본인의 이름 입력 : "); 
	scanf_s("%s", name, sizeof(name)); //입력한 이름을 받아 name변수에 저장

	printf("본인의 생일 입력 : ");
	scanf_s("%d", &birth);  // 입력한 생일을 받아 birth변수에 저장

	printf("본인의 학번 입력 : ");
	scanf_s("%d", &stud_num); //입력한 학번을 받아 stud_num 변수에 저장

	printf("본인의 전공 입력 : ");
	scanf_s("%s", major, sizeof(major)); //입력한 전공을 받아 major변수에 저장

	printf("\n\n이름 : %s", name); //name에 저장된 char[]형 변수 출력	
	printf("\n생일 : %d", birth); //birth에 저장된 int형 변수 출력
	printf("\n학번 : %d", stud_num); //stud_num에 저장된 int형 변수 출력
	printf("\n전공 : %s", major); //major에 저장된 shar[]형 변수 출력
}