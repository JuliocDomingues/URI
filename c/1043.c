#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a, b, c, peri, area;
    scanf("%f %f %f", &a, &b, &c);
    if(a+b > c && a+c > b && b+c > a){
        peri = a + b + c;
        printf("Perimetro = %0.1f\n", peri);
    }else{
        area = ((a+b)*c)/2.0;
        printf("Area = %0.1f\n", area);
    }

    return EXIT_SUCCESS;
}
