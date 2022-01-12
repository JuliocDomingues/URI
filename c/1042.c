#include <stdio.h>
#include <stdlib.h>
int main(void){
    int v1, v2 ,v3 ,v1a , v2a, v3a, aux;
    scanf("%d %d %d", &v1, &v2, &v3);
    v1a = v1;
    v2a = v2;
    v3a = v3;
    if(v1 >= v2){
    aux = v1;
    v1 = v2;
    v2 = aux;
    }
    if(v1 >= v3){
        aux = v1;
        v1 = v3;
        v3 = aux;
    }if(v2 >= v3){
        aux = v2;
        v2 = v3;
        v3 = aux;
    }
    printf("%d\n",v1);
    printf("%d\n",v2);
    printf("%d\n",v3);
    printf("\n");
    printf("%d\n",v1a);
    printf("%d\n",v2a);
    printf("%d\n",v3a);


    return EXIT_SUCCESS;
}
