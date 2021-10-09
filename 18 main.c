#include <stdio.h>
#include <stdlib.h>

int main()
{
   double sum=0;
   int mul=1,n;
   scanf("%d",&n);
   for(int j=1;j<=n;j++)
   {
       double t;
       mul=mul*2;
       if(j%2==0){
        t=-1.0*mul/(mul+1)/(2*mul-1);
       }
       else {
        t=1.0*mul/(mul-1)/(2*mul+1);
       }
       sum=sum+t;
   }
    printf("%.6f",sum);
    return 0;
}
