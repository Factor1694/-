#include <stdio.h>
#include <math.h>
/**
* double binaryToDecimal ������� ��� �������� �� �������� � ���������� ��
* @param double binary �������� �����, ������� ���� ���������
* @var double binaryNumber - ��������� �������� ����� ��� ��������
* @var int degree - ��������� ������� ��� ��������
* @var double decimalNumber - ��������� ���������� �����, ������� ����� ���������
* @var double modfHelper - ������� ��� ���������� �������
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
	//�������� �� ���������� �����
	if (binaryNumber > 0)
	{
		decimalNumber = binaryToDecimal(binaryNumber);

		if (decimalNumber != -1)
			printf("%.0lf", decimalNumber);
		else
			printf("������� ���������� �����!");

	}
	else
		printf( "������� ����� ������ ����!" );

    return 0;
}
