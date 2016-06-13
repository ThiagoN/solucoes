#include <stdio.h>
#include <math.h> 

void contDig(int t,int tt[]){
    int i,j,m,n,p,q,s=0,h=9,s0=0;
    
    for(i=0;i<=9;i++)
        tt[i]=0;
    
    if(t==0)
        return;
    
    m=(int)log10(t);
    n=t;
    
    q=1;
    for(j=1;j<=m;j++)
        q*=10; 
    
    for(i=m;i>=0;i--){
        p=q/10*i;
        for(j=1;j<=9;j++){
            tt[j]+=p*(n/q); 
            if(j<n/q)
                tt[j]+=q;
            
        }
        tt[n/q]+=n%(q)+1;
        n%=q; q/=10;
    }
    for(i=1;i<=9;i++) 
        s0+=tt[i];
    for(i=1;i<=m;i++,h*=10)
        s+=h*i;
    
    s+=(t-pow(10,m)+1)*(m+1);
    tt[0]=s-s0;
}

int main() {
    int n,a,b,i; 
    int aa[10],bb[10]; 
        while(scanf("%d %d",&a,&b),a+b!=0){
            a-=1;
            contDig(a,aa);
            contDig(b,bb);
            for(i=0;i<9;i++)
                printf("%d ",bb[i]-aa[i]);
            printf("%d\n",bb[9]-aa[9]);
        }
}