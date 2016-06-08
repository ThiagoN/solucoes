#include <stdio.h>
#include <string.h>

int main() {
	int n,i,c,p,posicao[1000],erro;
	while (1) {
		erro = 0;
		memset(posicao,0,sizeof(posicao));
		scanf("%d",&n);
		if (n == 0)
			break;
		else {
			for (i=1;i<=n;i++) {
				scanf("%d %d",&c,&p);
				if ((i + p) < 0 || (i + p) > n) 
					erro = 1;
				else
					posicao[i + p] = c;
			}
			if (erro == 0) {
				for (i=1;i<=n;i++) {
					if (posicao[i] == 0) {
						erro = 1;
						break;
					}
				}
			}
			if (erro == 1) {
				printf("-1\n");
			}
			else {
				for (i=1;i<=n-1;i++) {
					printf("%d ",posicao[i]);
				}
				printf("%d\n",posicao[n]);
			}
		}
	}
	return 0;
}
