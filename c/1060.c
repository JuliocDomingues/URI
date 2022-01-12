#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int cont = 0;
	float val;
	for(i = 0; i < 6; i++){
		scanf("%f", &val);
		if(val > 0)
			cont++;
	}
	printf("%d valores positivos\n", cont);
	return EXIT_SUCCESS;
}