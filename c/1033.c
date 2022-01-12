#include<stdio.h>
#include<stdlib.h>

int rec(int n,int qtd){
	if(n == 0 || n == 1)
		return 1;
	else{
		qtd += rec(n-1)+rec(n-2);
		return qtd;
	}
}

int main(void){
	int n, b;
	int i = 0;

	scanf("%d %d", &n, &b);
	while(n != 0 && b != 0){
		i++;
		printf("Case %d: %d %d %d", i, n, b, rec(n,0));				
		scanf("%d %d", &n, &b);
	}
	return 0;
}