#include <stdio.h>
#include <math.h>

int main() {
	int r,i,a,b,n,rodada[1001],vPedro=0,vLucas=0;
	float lucas,pedro;
	scanf("%d",&r);
	for (i = 1;i<=r;i++) {
		scanf("%d^%d",&a,&b);
		scanf("%d!",&n);
		lucas = log(a)*b;
		for (pedro = log(1);n>1;n--)
			pedro += log(n);
		if (lucas > pedro) {
			rodada[i] = 1;
			vLucas++;
		}
		else {
			rodada[i] = 2;
			vPedro++;
		}
	}
	if (vPedro == vLucas)
		printf("A competicao terminou empatada!\n");
	else if (vLucas > vPedro)
		printf("Campeao: Lucas!\n");
	else
		printf("Campeao: Pedro!\n");
	for (i = 1;i<=r;i++) {
		if (rodada[i] == 1)
			printf("Rodada #%d: Lucas foi o vencedor\n",i);
		else
			printf("Rodada #%d: Pedro foi o vencedor\n",i);
	}
}
