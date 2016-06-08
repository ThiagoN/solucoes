#include<stdio.h>
#include<math.h>

int main()
{
      int D,VF,VG,TW=12;
      double TF,TG,X;
                  while(scanf("%d %d %d",&D,&VF,&VG)==3){
                        X= (double )sqrt((TW*TW+(D*D)));
                        TF= (double)TW/VF;
                        TG=(double) (X/VG);
                  if(TG>TF)
                  printf("N\n");
                  else
                  printf("S\n");
                  }
      return 0;
}
