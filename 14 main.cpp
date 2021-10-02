#include <stdio.h>
#include <math.h>
int main()
{
 int s=1;
 double pi=0,n=1,t=1;
 while(fabs(t)>1e-6)
    pi=pi+t,n=n+2,s=-s,t=s/n;
 pi=pi*4;
 printf("%lf",pi);
 return 0;
}
