#include <stdio.h>
int main(void) {
	//2022120024 ������ ���� ����
	char name[15], major[30]; //�̸��� ������ ���� ���� ����
	int birth, stud_num; //���ϰ� �й��� ���� ���� ����

	printf("������ �̸� �Է� : "); 
	scanf_s("%s", name, sizeof(name)); //�Է��� �̸��� �޾� name������ ����

	printf("������ ���� �Է� : ");
	scanf_s("%d", &birth);  // �Է��� ������ �޾� birth������ ����

	printf("������ �й� �Է� : ");
	scanf_s("%d", &stud_num); //�Է��� �й��� �޾� stud_num ������ ����

	printf("������ ���� �Է� : ");
	scanf_s("%s", major, sizeof(major)); //�Է��� ������ �޾� major������ ����

	printf("\n\n�̸� : %s", name); //name�� ����� char[]�� ���� ���	
	printf("\n���� : %d", birth); //birth�� ����� int�� ���� ���
	printf("\n�й� : %d", stud_num); //stud_num�� ����� int�� ���� ���
	printf("\n���� : %s", major); //major�� ����� shar[]�� ���� ���
}