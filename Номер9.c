#include <stdio.h>
int hex(char ch, int i, int k){
printf("Vvod Stroki Simvolov");
/* Vvod stroki simvolov. Okonchanie vvode simvol “.” -Tochka)*/
do{
    ch = getchar();
    /* Proverka na 16-richnost simvola ishodnoi stroki; vichislenie i and k*/
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
/* k=kolichestvo vvedennih simvolov, i=kolichestvo 16-richnih simvolov*/
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
