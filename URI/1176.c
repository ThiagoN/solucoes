#include<stdio.h>

int main()
{
   long long int n, ant1 = 0, ant2 = 1, x, c;
   int i,j;
   scanf("%d", &j);
   for(i=1; i<=j; i++)
   {
       ant1 = 0; 
       ant2 = 1;
       scanf("%lld",&n);
       n=n+1;
       for ( c = 0 ; c < n ; c++ )
       {
          if (c <= 1) x = c;
          else
          {
             x = ant1 + ant2;
             ant1 = ant2;
             ant2 = x;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,x);
   }
   return 0;
}
