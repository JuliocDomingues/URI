#include <stdio.h>

int main(void){
	int pro, i = 0, num_ciclos = 0, cont = 0;
  char p[50];

  while(scanf("%50s", p) != EOF){
  	cont = i = num_ciclos = 0;
  	scanf("%d", &pro);
  	while(p[i] != '\0'){
  		if(p[i] == 'W'){
  			num_ciclos++;
  			if(cont != 0)
  				num_ciclos++;
  			cont = 0;
  		}else{
  			cont++;
  			if(cont == pro){
  				num_ciclos++;
  				cont = 0;	
  			}
  		}
			i++;
  	}
  	if(cont != 0)
  		num_ciclos++;

  	printf("%d\n", num_ciclos);
  }


  return 0;
}
