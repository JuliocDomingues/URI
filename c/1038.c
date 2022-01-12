#include <stdio.h>
#include <stdlib.h>

int main(void){
    float cod, quant;
    scanf("%f %f", &cod, &quant);
    if(cod == 1){
        cod = 4.00;
        cod = cod * quant;
    }else if(cod == 2){
        cod = 4.50;
        cod = cod * quant;
    }else if(cod == 3){
        cod = 5.00;
        cod = cod * quant;
    }else if(cod == 4){
        cod = 2.00;
        cod = cod * quant;
    }else if(cod == 5){
        cod = 1.50;
        cod = cod * quant;
    }
    printf("Total: R$ %0.2f\n", cod);

    return EXIT_SUCCESS;
}
