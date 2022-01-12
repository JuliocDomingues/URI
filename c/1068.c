#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef char tipo;

typedef struct _pilha{
	tipo valor;
	struct _pilha * prox;

}tpilha;

typedef tpilha * pilha;

void init(pilha * stack);
void empilha(pilha * stack, tipo val);
tipo desempilha(pilha * stack);
int empty(pilha * stack);

void init(pilha * stack){
	*stack = NULL;
}

void empilha(pilha * stack, tipo val){
	tpilha * aux;
	aux = (tpilha *)malloc(sizeof(tpilha));
	aux -> valor = val;
	aux -> prox = *stack;
	*stack = aux;

}

int empty(pilha * stack){
	int ret = -1;
	if(*stack == NULL)
		ret = 1;
	return ret;
}

tipo desempilha(pilha * stack){
	tipo ret;
	tpilha * aux;
	aux = *stack;
	ret = (*stack)->valor;
	(*stack) = (*stack)->prox;
	free(aux);
	return ret;
}

int verifica(pilha * stack, tipo letra){
	tipo aux;
	int ret = -1;
	aux = desempilha(stack);
	if(aux == '(' && letra == ')')
		ret = 1;
	return ret;
}


int main(){
	tipo letra;
	pilha p;
	init(&p);
	int aux = 0;
	while(scanf("%c", &letra) != EOF){
		if(letra == '(')
			empilha(&p, letra);
		else if(letra == ')'){
				if(empty(&p) == 1)
					aux = -1;
				else if(verifica(&p, letra) == -1)
					aux = -1;
				}
	
	if(letra == '\n'){		
		if(aux == -1 || empty(&p) == -1)
			printf("incorrect\n");
		else
			printf("correct\n");
		aux = 0;
		while(empty(&p) == -1)
			desempilha(&p);
		}
	}



	return EXIT_SUCCESS;
}