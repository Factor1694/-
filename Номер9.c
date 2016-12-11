#include <stdio.h>
int hex(char ch, int i, int k){
printf("Vvod Stroki Simvolov");
/* ¬вод строки символов (окончание ввода символ У.Ф -точка)*/
do{
    ch = getchar();
    /* ѕроверка символа исходной строки, €вл€етс€ ли он 16-ричным числом; вычисл€ем i и k */
    if ((ch>='0'&&ch<='9')|| (ch>='a' && ch<= 'f')||(ch >='A'&& ch <='F'))
        i++;
    k++;
}
while (ch!='.');
if ((k-2)==i)printf ("Etot Simvol Ishodnoi stroki est 16-richnoe chislo");
else printf ("Etot Simvol Ishodnoi stroki ne est 16-richnoe chislo");
}

int main (int argc, char*argv[]){
char ch, q;
int i, k, n;
/* k=количество всех введенных символов, i=количество 16-ричных символов*/
k=1;
do{
    i=0;
    n=hex(ch, i, k);
    printf ("\n Vvedite'1', esli vi hotite prodojit. Vvedite '0', esli vi hotite zakonchit programmu");
    scanf ("%d", &q);
    printf ("\n");
    k=0;
}
    while (q!=0);
    return 0;
}
