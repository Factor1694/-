#include <stdio.h>
#include <stdlib.h>

int max_row(int N, int M){
    int   i,  j,  k;
    float S,  MaxSum;
    float **a ;
    k=0;
    S=0;
    MaxSum=0;
     a=(float **) malloc(N*sizeof(float*));  // ��������� ������
    if (a == NULL)
        {
            printf ("Memory allocation error.");
            return 0;
    }
    for  (i=0; i<N; i++){
        a[i]=(float *) malloc(M*sizeof(float));
    }
    printf("Vvedite matrichie elementi.\n"); // ���� ��������� �������
    for  (i=0; i<N; i++){
        S=0;
        for(j=0; j<M; j++) {    // ��������������� ����������� ����� �����
            scanf("%f", &a[i][j]);
            S+=a[i][j];
        }
        if (S > MaxSum) {  // ������� ����� ������  � ������������ ������
            MaxSum=S;
            k=i;
        }
    }
    printf("Nomer stroki s naibolshei summoi elementov: %d", k+1);
}

int main(int argc, char *argv[]){
    int N, M, x;
    printf("Vvedite razmer matrici\n"); // ������ ������ �������
    do{
        scanf("%d" "%d", &N, &M);
        if (N<=0  ||  M<=0) printf("Error. Try again.\n");
    } while (N<=0   ||   M<=0);
    x = max_row(N, M);
    return 0;
}

