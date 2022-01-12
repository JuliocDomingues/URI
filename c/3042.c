#include <stdio.h>

int main(){
  int M;
  int L, C, R;
  char onde = 'c';
  int pulos = 0;

  scanf("%d", &M);

  while(M != 0){
    scanf("%d %d %d", &L, &C, &R);
    M--;
    
    if(onde == 'c' && C == 1){
      
      pulos++;
      if(L == 0)
        onde = 'l';
      else
        onde = 'r';
      while(M != 0){
        scanf("%d %d %d", &L, &C, &R);
        M--;
        if(onde == 'l' && L == 1){
          if(C == 0){
            pulos++;
            onde = 'c';
          }else{
            pulos = pulos + 2;
            onde = 'r';
          }
        }else if(onde == 'r' && R == 1){
          if(C == 0){
            pulos++;
            onde = 'c';
          }else{
            pulos = pulos + 2;
            onde = 'l';
          }
        }else if(onde == 'c' && C == 1){
          pulos++;
          if(L == 0){
            onde = 'l';
          }else{
            onde = 'r';
          }
        }
      }
    }
    if(M == 0){
      printf("%d\n", pulos);
      pulos = 0;
      onde = 'c';
      scanf("%d", &M);
    }    
  }

  return 0;
}