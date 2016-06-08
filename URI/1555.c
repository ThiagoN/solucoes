#include <stdio.h>

int main()
{
    int n,x,y,r,b,c,i;
        scanf("%d",&n);
    for(i = 0 ; i < n ; i++){
        scanf("%d %d", &x, &y);
	    r = (3*x) * (3*x) + y*y;
	    b = 2*(x*x) + (5*y) * (5*y);
	    c = -100*x + y*y*y;
	    if(r > b && r > c)
	        printf("Rafael ganhou\n");
	    else if(b > r && b > c)
	        printf("Beto ganhou\n");
	    else if(c > r && c > b)
	        printf("Carlos ganhou\n");
    }
    return 0;
}
