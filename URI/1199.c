#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int tam,k=0,l=0,pos=0;
	long long r=0,resul=0;
	char ent[11],val;
	unsigned int v=0,v1=0,v2=0,v3=0,j=0,conv=0;
	int q=0,i=0;
	while((ent[0]=='0'&& ent[1]=='x') || conv>=0)
	{
		scanf("%s",ent);
		conv=atoi(ent);
		resul=0;
		if(ent[0]=='-'){break;	}
		else if(strcmp(ent,"0x80000000")==0) {printf("2147483648\n");		}
		else if(ent[0]=='0' && ent[1]=='x')
		{
			tam=strlen(ent)-1;
			for(i=tam;i>=0;i--)
			{
		   		val=ent[i];
		     	     if(val=='x' && ent[i-1]=='0'){ }
				else if(val=='0' && ent[i+1]=='x'){ }
				else if(val=='A'|| val=='a'){r=10;	pos= tam-i; resul=resul+ (r*pow(16,pos));}
				else if(val=='B'|| val=='b'){r=11;	pos= tam-i; resul=resul+ (r*pow(16,pos));}
				else if(val=='C'|| val=='c'){r=12;	pos= tam-i; resul=resul+ (r*pow(16,pos));}
				else if(val=='D'|| val=='d'){r=13;	pos= tam-i; resul=resul+ (r*pow(16,pos));}
				else if(val=='E'|| val=='e'){r=14;	pos= tam-i; resul=resul+ (r*pow(16,pos));}
				else if(val=='F'|| val=='f'){r=15;	pos= tam-i; resul=resul+ (r*pow(16,pos));}
				else		 {r=val-48; pos= tam-i; resul=resul+ (r*pow(16,pos));}
				
			}
			printf("%i\n",resul);
		}
		else
		{
			v=atoi(ent);
			printf("0x%X\n",v);
		}
		}
   return 0;
}
