#include <stdio.h>
 
int main() {
	int x[1000],n,i,menor,posicao;
	scanf("%i",&n);
	for (i = 0;i<n;i++) {
		scanf("%i",&x[i]);
	}
	menor = x[0];
	for (i = 0;i<n;i++) {
		if (x[i]<menor) {
			menor=x[i];
			posicao = i;
		}
	}
    printf("Menor valor: %i\nPosicao: %i\n", menor,posicao);   

    return 0;
}
