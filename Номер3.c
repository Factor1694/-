#include <stdio.h>

int degree (int n, int d)
{
	if (d == 0)
		return 1; // ����� ����� � ������� 0 == 1
	else if (d == 1)
		return n; // n � ������� 1 == n
	else return (n * degree(n, d-1)); // �������� - ���������� n * n_�_�������_(d-1)
}

int main (int argc, char *argv[])
{
	int n; // �����, ������� ����� �������� � ������� (n == number)
	int d; // �������, � ������� �������� (d == degree)
	int answ; // �����

	// ������������ ������ ����� n � d
	printf("Vvedite chislo N, kotoroe vozvodim v stepen D: ");
	scanf("%d", &n);
	printf("Vvedite stepen D: ");
	scanf("%d", &d);

	answ = degree(n, d);

	printf ("%d^%d = %d", n, d, answ);

	return 0;
}
