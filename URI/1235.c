#include <stdio.h>
#include <string.h>

int main () {

    char str[1000],str1[1000],str2[1000],str3[1000],str4[1000];
    int i,j,k,l,m,n,T,a,s,t,p,q,o,w;

    scanf("%d",&T);
    getchar();

	while(T--) {	
		gets(str);
		i = strlen(str);
		m = i/2;

		for(j=0;j<m;j++)
		str1[j] = str[j];
		
		str1[j] = '\0';
		for(k = m,n=0;k<i;k++,n++)
			str2[n] = str[k];
		
		str2[n] = '\0';
		s = strlen(str1);
		t = strlen(str2);
		o=0;
		for(p=s-1;p>=0;p--)
		{
		    str3[o] = str1[p];
		    o++;
		}
		str3[o] = '\0';
		w=0;
		for(q=t-1;q>=0;q--)
		{
		    str4[w] = str2[q];
		w++; 
		}
		str4[w] = '\0';
		strcat(str3,str4);
		printf("%s\n",str3);
	}
}
