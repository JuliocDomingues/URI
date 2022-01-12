#include<stdio.h>

int main(){
	int ini, fim, resul;
	resul = 0;

	scanf("%d %d", &ini, &fim);

	if(ini < fim)
		resul = fim - ini;
	else if(ini > fim){
		fim = fim + 24;
		resul = fim - ini;
	}else
		resul = 24;

	printf("O JOGO DUROU %d HORA(S)\n", resul);

}