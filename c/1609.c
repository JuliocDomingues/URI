#include <stdio.h>
#include <stdlib.h>

int main(){
    int it, tam, i, j, resultado;
    int cont = 0;
    int aux;
    int *v;
    scanf("%d", &it);
    while(it--){
        scanf("%d", &tam);
        v = (int *)malloc(tam*sizeof(int));
        for(i = 0; i <tam; i++)
            scanf("%d", &v[i]);
        for(i = 1; i <= tam-1; i++){
            aux = -1;
            j = 0;
            while(aux != 1){
                if(j == i-1)
                    aux = 1;
                if(v[i] == v[j]){
                    cont += 1;
                    aux = 1;
                }
                j++;
            }
        }
        resultado = tam - cont;
        cont = 0;
        printf("%d\n", resultado);
        free(v);
    }
    return EXIT_SUCCESS;
}
