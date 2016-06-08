#include <stdio.h>
#include <string.h>

int main() {
	int sobe,letras,Num,mais,i,letra[27];
	char entra[1001] = {'\0'};
	scanf("%d",&Num);
	for (mais=0;mais<Num;mais++) {
		letras = 0;
		sobe = 0;
		memset(&letra, 0, sizeof(letra));
		for (i = 0; i <strlen(entra);i++)
			entra[i] = '\0';
		getchar();
		gets(entra);
		getchar();
		while (entra[sobe]) {
			if(entra[sobe]=='a' && letra[1]==0)
			{letras++;letra[1]=1;}
			else if(entra[sobe]=='b' && letra[2]==0)
			{letras++;letra[2]=1;}
			else if(entra[sobe]=='c' && letra[3]==0)
			{letras++;letra[3]=1;}
			else if(entra[sobe]=='d' && letra[4]==0)
			{letras++;letra[4]=1;}
			else if(entra[sobe]=='e' && letra[5]==0)
			{letras++;letra[5]=1;}
			else if(entra[sobe]=='f' && letra[6]==0)
			{letras++;letra[6]=1;}
			else if(entra[sobe]=='g' && letra[7]==0)
			{letras++;letra[7]=1;}
			else if(entra[sobe]=='h' && letra[8]==0)
			{letras++;letra[8]=1;}
			else if(entra[sobe]=='i' && letra[9]==0)
			{letras++;letra[9]=1;}
			else if(entra[sobe]=='j' && letra[10]==0)
			{letras++;letra[10]=1;}
			else if(entra[sobe]=='k' && letra[11]==0)
			{letras++;letra[11]=1;}
			else if(entra[sobe]=='l' && letra[12]==0)
			{letras++;letra[12]=1;}
			else if(entra[sobe]=='m' && letra[13]==0)
			{letras++;letra[13]=1;}
			else if(entra[sobe]=='n' && letra[14]==0)
			{letras++;letra[14]=1;}
			else if(entra[sobe]=='o' && letra[15]==0)
			{letras++;letra[15]=1;}
			else if(entra[sobe]=='p' && letra[16]==0)
			{letras++;letra[16]=1;}
			else if(entra[sobe]=='q' && letra[17]==0)
			{letras++;letra[17]=1;}
			else if(entra[sobe]=='r' && letra[18]==0)
			{letras++;letra[18]=1;}
			else if(entra[sobe]=='s' && letra[19]==0)
			{letras++;letra[19]=1;}
			else if(entra[sobe]=='t' && letra[20]==0)
			{letras++;letra[20]=1;}
			else if(entra[sobe]=='u' && letra[21]==0)
			{letras++;letra[21]=1;}
			else if(entra[sobe]=='v' && letra[22]==0)
			{letras++;letra[22]=1;}
			else if(entra[sobe]=='w' && letra[23]==0)
			{letras++;letra[23]=1;}
			else if(entra[sobe]=='x' && letra[24]==0)
			{letras++;letra[24]=1;}
			else if(entra[sobe]=='y' && letra[25]==0)
			{letras++;letra[25]=1;}
			else if(entra[sobe]=='z' && letra[26]==0)
			{letras++;letra[26]=1;}
			sobe++;
		}
		if(letras==26)
			printf("frase completa\n");
		else if(letras>=13)
			printf("frase quase completa\n");
		else if(letras<13)
			printf("frase mal elaborada\n");
	}
	return 0;
}
