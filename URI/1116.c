#include <stdio.h>
 
int main() {
	int x,y,n,i;
	scanf("%i",&n);
	for (i = 1;i<=n;i++) {
		scanf("%i %i",&x,&y);
		if (y == 0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n",(float)x/y);
	}
    return 0;
}
