#include <stdio.h>
#include <string.h>

int main() {
	char entrada[21];
	int n,k,i,c;
	long long r;
	scanf("%d",&c);
	for (i=0;i<c;i++) {
		scanf("%d",&n);
		scanf("%s",entrada);
		k = strlen(entrada);
		for (r = 1;n>1;n-=k)
			r *= n;
		printf("%lld\n",r);
		
	}
}

