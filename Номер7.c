#include <stdio.h>
// MAXIMAL RAZMER MATRIX
#define nMax 1000

int input_and_calc_positives(int n){
	// KOLICHESTVO POLOZITELNIH ELEMETS
	int iPositiveNum = 0;
	// SREDNEE ARIFMETIC ZNACHENIE
	double dAverage = 0;

	// PROVERKA
	if (n < 1 || n > nMax)
	{
		printf("Vi bili ne pravi. Vsego horoshego.");
	}

	double a[n];
	int i;

	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", (i+1));
		scanf("%lf", &a[i]);

		if (a[i] > 0)
			iPositiveNum++;

		dAverage += a[i];
	}

	dAverage /= n;

	printf("\n\nVi vveli %d polojitel'nih chisla.\nIh srednee arifmeticheskoe = %lf", iPositiveNum, dAverage);
}

int main (int argc, char *argv[])
{
	// KOLICHESTVO ELEMENTS
	int n = 1;

	printf ("Vvedite razmer massiva (1- %d): ", nMax);
	scanf ("%d", &n);

	input_and_calc_positives(n);

	return 0;
}
