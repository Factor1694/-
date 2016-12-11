#include <stdio.h>

double TransformToCelsus (int iShkala, double dGraduses)
{
	double answ = dGraduses;

	switch (iShkala)
	{
		case 1:
		break;

		case 2:
		answ = (dGraduses - 32) / 1.8;
		break;

		case 3:
		answ = dGraduses - 273;
		break;

		default:
		break;
	}

	return answ;
}

void OutputGraduses (double dGraduses)
{
	double dFarengate = dGraduses * 1.8 + 32;
	double dKalvin = dGraduses + 273;

	printf("\n %lf graduses Celsus\n%lf graduses Farengate\n%lf graduses Kalvin", dGraduses, dFarengate, dKalvin);
}

int main (int argc, char *argv[])
{
	int iShkala = 0;
	double dGraduses;

	// CHOOSE SHKALU IZMERENIYA
	printf("1 - Celsus\n2 - Farengate\n3 - Kelvin\nViberite shkalu (1-3): ");
	scanf("%d", &iShkala);

	// input data validating
	if (iShkala > 3 || iShkala < 1)
	{
		printf("ERROW!!!");
		return 0;
	}

	// VVOD CHISLENNOGO ZNACHENIA (V GRADUSAH)
	printf("Skolko gradusov: ");
	scanf("%lf", &dGraduses);

	dGraduses = TransformToCelsus(iShkala, dGraduses);

	OutputGraduses(dGraduses);

	return 0;
}
