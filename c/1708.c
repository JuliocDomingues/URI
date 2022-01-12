#include <stdio.h>
#include <stdlib.h>

int main(){
    int piloto1, piloto2, i;
    int volta =0;
    int cont1, cont2;
    int aux = -1;
    scanf("%d %d", &piloto1, &piloto2);
    cont1 = 0;
    cont2 = 0;
    while(aux != 1){
        for(i = 0; i <= piloto2; i++){
            if(i == piloto1)
                cont1 = cont1 + piloto1;
            if(i == piloto2)
                cont2 = cont2 + piloto2;
        }
        volta+=1;
        if(cont2 >= cont1+piloto2)
            aux = 1;
    }
    printf("%d\n", volta);
    return EXIT_SUCCESS;
}
