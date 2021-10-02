#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&c,&d);
    if(c>d)
        b=c,a=d;
    else
        b=d,a=c;
   for(int i=a;i<=b;i++)
   {
       int j=2;
       for(;j<i;j++)
        if(i%j==0)break;
       if(i==j)printf("%d ",i);
   }
   return 0;
}
