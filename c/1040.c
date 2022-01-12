#include <stdio.h>
#include <stdlib.h>

int main(void){
    float n1, n2, n3, n4, med;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    med = (n1*2 + n2*3 + n3*4 + n4)/10.0;
    if(med >= 7.0){
        printf("Media: %0.1f\n", med);
        printf("Aluno aprovado.\n");
    }else if(med < 5.0){
        printf("Media: %0.1f\n", med);
        printf("Aluno reprovado.\n");
    }else{
        printf("Media: %0.1f\n", med);
        printf("Aluno em exame.\n");
        scanf("%f", &n1);
        printf("Nota do exame: %0.1f\n", n1);
        med = (n1 + med)/2.0;
        if(med >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1f\n", med);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1f\n", med);
        }
    }

    return EXIT_SUCCESS;
}
