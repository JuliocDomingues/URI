#include <stdio.h>

int main(){
  int a, d, g;
  long int n;
  scanf("%ld", &n);

  while (n){  
    
    scanf("%d %d %d", &a, &d, &g);

    if(a >= 200 && a <=300){
      if(d >= 50){
        if(g >= 150)
          printf("Sim\n");
        else
          printf("Nao\n");  
      }else
        printf("Nao\n");
    }else
      printf("Nao\n");

    
    n--;
  }

  return 0;
}