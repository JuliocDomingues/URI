#include<stdio.h>

int main(void){
	float M[12][12], soma = 0, media = 0;
	int C, lin, col;
	char T;

	scanf("%d", &C);
	//fflush(stdin);
	scanf("\n%c", &T);

	for(lin = 0; lin < 12; lin++){
		for(col = 0; col < 12; col++){
			scanf("%f", &M[lin][col]);
		}
	}

	for(lin = 0; lin < 12; lin++)
		soma += M[lin][C];
	
	media = soma/12;

	if(T == 'S')
		printf("%.1f\n", soma);
	else if(T == 'M')
		printf("%.1f\n", media);

	return 0;
}