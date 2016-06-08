#include <stdio.h>

int main() {			
 	int c=0,p1=0,i=0,j=0,p[3];
 	char m,s;
    
    scanf("%i",&c);

	for(i=1;i<=c;i++)
	{
		scanf("%i",&p1);
		
		p[0]=0;
		p[1]=0;
		p[2]=0;
		
		for(j=1;j<=p1;j++)
		{	
			getchar();
			scanf("%c %c",&m,&s);

			switch(m)
			{
				case 'R':
					if(s=='G') p[0]+=2;
					
					else if(s=='B')p[0]++;
					
					break;
				case 'G':
					if(s=='B') p[1]+=2;
					
					else if(s=='R')p[1]++;
					
					break;
				case 'B':
					if(s=='R') p[2]+=2;
					
					else if(s=='G')p[2]++;
					
					break;
			}
		}
		
		if(p[0]==p[2] && p[0]==p[1] && p[2]==p[1]) printf("trempate\n");
		else if(( p[0]==p[2] && p[0]>p[1] ) || ( p[1]==p[2] && p[1]>p[0] ) || ( p[0]==p[1] && p[0]>p[2] ) ) printf("empate\n");	
		else if(p[0]>p[1] && p[0]>p[2]) printf("red\n");
		else if(p[1]>p[2] && p[1]>p[0]) printf("green\n");
		else if(p[2]>p[0] && p[2]>p[1]) printf("blue\n");
	}
 
    return 0;
}
