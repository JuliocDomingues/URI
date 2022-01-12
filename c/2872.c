#include<stdio.h>
#include<stdlib.h>
typedef char string;
int separa(int *v, int comeco, int fim);

void quick(int *v, int comeco, int fim){
    int meio;
    if(comeco < fim){
        meio = separa(v, comeco, fim);
        quick(v, comeco, meio);
        quick(v, meio+1, fim);
    }

}

int separa(int *v, int comeco, int fim){
    int p, a, b, sair, aux;
    a = comeco;
    b = fim;
    sair = 0;
    p = v[comeco];
    while(!sair){
        while(v[a] < p)
            a++;
        while(v[b] > p)
            b--;
        if(a < b){
            aux = v[a];
            v[a] = v[b];
            v[b] = aux;
            a++;
            b--;
        }else{
            sair = 1;
        }

    }
    return b;
}


int main(){
	string pac[7];
	int *vet;
	vet = (int *)malloc(sizeof(int)*40);
	int num, j;
	int i = 0;
	int x;
	vet[0] = 0;
	scanf("%d", &x);
	while(x == 1 || x == 0){
		i = 0;
		while(x != 2 || x == 0){
			scanf("%s", pac);
			if(pac[0] == 'P' || pac[1] == 'a'){
				scanf("%d", &num);
				vet[i] = num;	
			}else
				x = 2;
				
			i++;
		}
		scanf("%d", &x);
		quick(vet, 0, i-2);

	for (j = 0; j < i-1; j++){
		if(vet[j] < 10){
			printf("Package 00%d\n", vet[j]);

		}
		else if(vet[j] < 100 && vet[j] >= 10){
			printf("Package 0%d\n", vet[j]);

		}
		else{
			printf("Package %d\n", vet[j]);

		}

		}
		if(x == 1 || x == 0)
			printf("\n");
		if(x != 1 && x != 0)
			printf("\n");
	}


	return EXIT_SUCCESS;
}