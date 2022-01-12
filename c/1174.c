#include<stdio.h>
#include<stdlib.h>
#define limit 100

int main(void){
	int i;
	double *vet;

	vet = (double *)malloc(limit * sizeof(double));

	for(i = 0; i < 100; i++){
		scanf("%lf", &vet[i]);
		if(vet[i] <= 10)
			printf("A[%d] = %0.1f\n", i, vet[i]);
	}

	free(vet);

	return 0;
}