#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	float resul = 0;
	int cont = 0;
	float val;
	for(i = 0; i < 6; i++){
		scanf("%f", &val);
		if(val > 0){
			cont++;
			resul = val + resul;
		}
	}
	resul = resul / cont;

	printf("%d valores positivos\n", cont);
	printf("%0.1f\n", resul);
	return EXIT_SUCCESS;
}