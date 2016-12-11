#include <stdio.h>
// ������������ ������ �������
#define nMax 1000

int input_and_calc_positives(int n){
	// ���������� ������������� ���������
	int iPositiveNum = 0;
	// ������� ��������������
	double dAverage = 0;

	// validation
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

	printf("Spasibo!\n\nVi vveli %d polojitel'nih chisla.\nIh srednee arifmeticheskoe = %lf", iPositiveNum, dAverage);
}

int main (int argc, char *argv[])
{
	// ���������� ���������
	int n = 1;

	printf ("Vvedite razmer massiva (1- %d): ", nMax);
	scanf ("%d", &n);

	input_and_calc_positives(n);

	return 0;
}
