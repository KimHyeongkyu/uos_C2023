#include <stdio.h>
#include <time.h>

int main(void) {
	time_t t;
	t = time(NULL);

	printf("���� �ð� : %lld�� %lld�� %lld��\n", t / 60 / 60 / 24 / 365 + 1970, (t / 60 / 60 / 24)%12);	//���� �ð�(��, ��)���� ���

	printf("1970�� 1�� 1�� 0�� 0�� 0�ʸ� ��������\n");
	printf("��� �� : %lld��\n", t / 60 / 60 / 24);
	printf("��� �ð� : %lld�ð�\n", t / 60 / 60);
	printf("��� �� : %lld��\n", t / 60 );
	printf("��� �� : %lld��\n", t);
}