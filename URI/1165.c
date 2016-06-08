#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k,root,n,count=0;
	while(scanf("%d",&k)==1){
		for(i=1;i<=k;i++){
			scanf("%d",&n);
			
			if(n==1   || n==0)
				printf("%d nao eh primo\n",n);
			else {
				count=0;
				root=sqrt(n);
				for(j=2;j<=root;j++){
					if(n%j==0){
						count=1;
						break;
					}
				}
				if(count==1)
					printf("%d nao eh primo\n",n);
				else
					printf("%d eh primo\n",n);
				count=0;
			}
		}
	}
}
