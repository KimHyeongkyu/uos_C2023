#include <stdio.h>

int main(void) {
	char name[10];
	char grade;
	int birth, stud_num;
	char major[50];

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", &name, (int)sizeof(name));	//scanf_s �Լ��� �̿��Ͽ� char[] �������� �̸� �ޱ�

	printf("��������� �Է��ϼ��� : ");
	scanf_s(" %c", &grade);						//scanf_s �Լ��� �̿��Ͽ� char �������� ������� �ޱ�, ȭ��Ʈ �����̽� ���

	printf("��������� �Է��ϼ��� : ");
	scanf_s("%d", &birth);						//scanf_s �Լ��� �̿��Ͽ� int �������� ������� �ޱ�

	printf("�й��� �Է��ϼ��� : ");
	scanf_s("%d", &stud_num);					//scanf_s �Լ��� �̿��Ͽ� int �������� �й� �ޱ�

	printf("�а����� �Է��ϼ��� : ");
	scanf_s("%s", &major, (int)sizeof(major));	//scanf_s �Լ��� �̿��Ͽ� char[] �������� �а��� �ޱ�

	printf("�̸� : %s\n", name);
	printf("������� : %c\n", grade);
	printf("������� : %d\n", birth);
	printf("���г⵵ : %d\n", stud_num / 1000000);	//10�ڸ��� �й��� 10^6�� ������ ���ڸ� 4�ڸ��� ����
	printf("�а��� : %s\n", major);


}