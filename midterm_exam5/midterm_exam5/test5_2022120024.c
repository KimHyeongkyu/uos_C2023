#include <stdio.h>
#include <string.h>

int main(void) {

	char str[1000];
	int idx = 0;
	printf("���ڿ��� �Է��ϼ��� :");
	fgets(str, sizeof(str), stdin);
	int len1 = strlen(str);
	int len2 = 0;

	while (str[idx] != '\0') {
		if (str[idx] != ' ') {
			len2++;
			idx++;
		}
	}

	printf("���� ���� ���ڼ� : %d\n", len1);
	printf("���� ���� ���ڼ� : %d\n", len2);

	int a_num=0;
	while (str[idx] != '\0') {
		if (str[idx] == 'a') {
			a_num;
			idx++;
		}
	}
	printf("a�� ���� : %d\n", a_num);

	int b_num=0;
	while (str[idx] != '\0') {
		if (str[idx] == 'b') {
			b_num;
			idx++;
		}
	}
	printf("a�� ���� : %d\n", b_num);

	int c_num=0;
	while (str[idx] != '\0') {
		if (str[idx] == 'c') {
			c_num;
			idx++;
		}
	}
	printf("c�� ���� : %d\n", c_num);

	int d_num=0;
	while (str[idx] != '\0') {
		if (str[idx] == 'd') {
			d_num;
			idx++;
		}
	}
	printf("d�� ���� : %d\n", d_num);
}