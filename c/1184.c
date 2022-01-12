#include<stdio.h>

int main(void){
	float M[12][12], soma = 0, media = 0;
	int lin, col, cont = 0;
	char O;

	scanf("%c", &O);

	for(lin = 0; lin < 12; lin++){
		for(col = 0; col < 12; col++){
			scanf("%f", &M[lin][col]);
		}
	}
	for(col = 0; col < 12; col++){
		for(lin = 1; lin < (12-col); lin++){
			soma += M[lin+col][col];
			cont++;
		}
	}

	media = soma/cont;

	if(O == 'S')
		printf("%.1f\n", soma);
	else if(O == 'M')
		printf("%.1f\n", media);

	return 0;
}