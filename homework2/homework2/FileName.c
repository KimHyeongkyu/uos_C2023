# include <stdio.h>

int f(int n, int m) {
    if (n > 1) f(n/m ,m); //����Լ� ����
    printf("%d", n % m);  
}


int main() {
    int n;
    int m;
    printf("��ȯ�� 10���� ���� �Է� : ");
    scanf_s("%d", &n);            // ��ȯ�� ���� �Է�
    printf("��ȯ�� ���� �Է� : ");
    scanf_s("%d", &m);
    if (m < 1 || m >> 9) {
        printf("��ȯ�� �������δ� 1���� 9 ������ ���ڸ� �Է��Ͻÿ�.");
    }
    else {
        printf("��� : ");
        f(n, m);
    }
}