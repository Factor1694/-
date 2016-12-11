#include <stdio.h>

int degree (int n, int d)
{
	if (d == 0)
		return 1; // VVEDITE CHISLO V STEPENI 0 == 1
	else if (d == 1)
		return n; // n V STEPENI 1 == n
	else return (n * degree(n, d-1)); // REKURSIA - (n * n)^(d-1) '^'=STEPEN (d-1)
}

int main (int argc, char *argv[])
{
	int n; // CHISLO, KOTOROE NADO VOZVESTI V STEPEN(n == number)
	int d; //STEPEN, V KOTORUYU VOZVODIM  (d == degree)
	int answ; // ANSWER

	// VVODIM CHISLA n AND d
	printf("Vvedite chislo N, kotoroe vozvodim v stepen D: ");
	scanf("%d", &n);
	printf("Vvedite stepen D: ");
	scanf("%d", &d);

	answ = degree(n, d);

	printf ("%d^%d = %d", n, d, answ);

	return 0;
}
