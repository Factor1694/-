#include <stdio.h>
#include <math.h>
/**
* double binaryToDecimal THIS IS FUNCTION DLYA EREVODA IZ 2-ICHNOI V 10-ICHNOY SS
* @param double binary 2-ICHNOE CHISLO, KOTOROE NADO PEREVESTI
* @var double binaryNumber - 2-ICHNOE STATICHNOE CHISLO DLYA REKURSII
* @var int degree - STATICHNAYA STEPEN PEREVODA
* @var double decimalNumber - 10-ICHNOE STATICHNOE CHISLO, KOTOROE NADO VICHISLIT
* @var double modfHelper - FOR HELPING PRI VICHISLENII ZARYADA
* @return decimalNumber
*/
double binaryToDecimal( double binaryNumber )
{
    static int degree = 0;
    static double decimalNumber = 0;
    double modfHelper = 0;

    binaryNumber /= 10;
    modfHelper = modf( binaryNumber, &binaryNumber );
    modfHelper *= 10;
    decimalNumber += modfHelper * pow( 2, degree );
    degree++;
	if (modfHelper == 0 || modfHelper == 1)
	{
		if (binaryNumber == 0)
			return decimalNumber;
		else
			binaryToDecimal(binaryNumber);
	}
	else
		return -1;
}

int main( void )
{
    double binaryNumber;
    double decimalNumber;

    scanf("%lf", &binaryNumber);
	//PROVERKA
	if (binaryNumber > 0)
	{
		decimalNumber = binaryToDecimal(binaryNumber);

		if (decimalNumber != -1)
			printf("%.0lf", decimalNumber);
		else
			printf("VVEDITE KORREKTNOE CHISLO!");

	}
	else
		printf( "VVEDITE CHISLO >0!" );

    return 0;
}
