#include <stdio.h>
//2022120024 ������ ���� ����
int main(void) {

	char name[15], major[30];
	int birthday = 0, student_num = 0;

	printf("������ �̸� �Է� : "); 
	scanf_s("%s", name, sizeof(name)); //�Է��� �̸��� scanf�� �̿��Ͽ� �����ϱ�

	printf("������ ������� �Է� : ");
	scanf_s("%d", birthday); //�Է��� ��������� scanf �Լ��� �̿��Ͽ� �����ϱ�

	printf("������ �й� �Է� : ");
	scanf_s("%d", student_num); //�Է��� �й��� scanf �Լ��� �̿��Ͽ� �����ϱ�

	printf("������ �а��� �Է� : ");
	scanf_s("%s", major); //�Է��� �а����� scanf �Լ��� �̿��Ͽ� �����ϱ�

	printf("\n\n�̸� : %s\n", name);     //name�� ����� �̸� ���
	printf("������� : %d\n", birthday); //birthday�� ����� ���� ���
	printf("�й� : %d\n", student_num);  //student_num�� ����� �й� ���
	printf("�а��� : %s\n", major);      //major�� ����� �а��� ���

}