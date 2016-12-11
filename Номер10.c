#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int check (int N);


int main () {
	int N, a;

	printf("Enter size array \n");
	scanf("%d", &N);

	a = check (N);

	if (a == -1) {
		printf("This is increasing sequence \n");
	}
	else {
		printf("This is not increasing sequence \n");
	}

	system("pause");
	return 0;
}

int check (int N) {
	int i, ch = 0;
	float *ar;

	ar = (float*)malloc(N * sizeof(int));

	// Entering array //

	printf("Enter elements \n");
	for (i = 0; i<N; i++) {
		scanf("%f", &ar[i]);
	}

	// Sequence verification //

	for (i = 0; i < N-1; i++) {
		if ( ar[i] < ar[i+1]) {
			ch++;
		}
	}
	if (ch == N-1) {
		ch = -1;
	}

	return ch;
}
