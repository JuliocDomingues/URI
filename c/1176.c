#include<stdio.h>
#include<stdlib.h>

int main(void){
	int T, N;
	int i, j;
	long long int res, a = 0, b = 1;

	scanf("%d", &T);

	for(i = 0; i < T; i++){
		scanf("%d", &N);

		for(j = 0; j < N + 1; j++){
			if(j <= 1)
				res = j;
			else{
				res = a + b;
				a = b;
				b = res;
			}
		}
		printf("Fib(%d) = %lld\n", N, res);
		a = 0;
		b = 1;
	}

										

	return 0;
}