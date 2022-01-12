#include <stdio.h>

int main(void){
  int desloc, n, recebe, i;
  char p[50];

  scanf("%d", &n);

  while(n != 0){
    scanf("%s", p);
    scanf("%d", &desloc);
    for(i = 0; i < 50; i++){
      if(p[i] == '\0')
        break;
      if((p[i] - desloc) < 65)
        recebe = p[i] - desloc + 26;
      else
        recebe = p[i] - desloc;
      printf("%c", recebe);
    }
    printf("\n");
    n--;
  }
  return 0;
}
