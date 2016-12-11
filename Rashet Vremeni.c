#include <stdio.h>
#include <string.h>
#include <malloc.h>



int main (void)
{

	int studentsCount = 0;
	char **students = NULL;
	char whoLost[26] = {};
	int isFind = 1;

	int i = 0;

	printf("Input students count\n");

	/*������ ���������� ���������*/
	scanf("%d", &studentsCount);
	/*�������� ����� ��� gets()*/
	fflush(stdin);

	/*�������� ������ � ������� ��������� � �����*/

	students = (char**)malloc( studentsCount * sizeof(char*));

	for (  i = 0; i < studentsCount; i++ )
	{
		/*����������� ������ � ���� 1 ��� ������������ ������� ������*/
		students[i] = (char*)malloc( 26 * sizeof(char) );
		printf("Write name of student: \n");

		gets(students[i]);
		fflush(stdin);
	}

	/*������ ��������, ������� ���� �, ����������, ���� ���*/
	printf("Input search student\n");
	gets(whoLost);
	isFind = findString(whoLost, students, studentsCount);

	for (  i = 0; i < studentsCount; i++ )
		free(students[i]);

	free(students);

	/*���� ������� ������� 0, ������ ���� ����� �������*/
	if (isFind == 0 )
		printf("Student has founded!\n");
	else
		printf("Student has't founded!\n");

	pause();
	return 0;
}
