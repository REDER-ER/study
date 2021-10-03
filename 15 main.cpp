#include <stdio.h>
int main()
{
   int cnt=0,sum=0,i,j,a,b=1;
   for(i=500;i<=800;i++)
   {
       for(j=2;j<i;j++)
        if(i%j==0)break;
       if(j==i)cnt=cnt+1,b=0-b,a=i*b,sum=sum+a;
   }
   printf("%d %d",cnt,sum);
    return 0;
}
