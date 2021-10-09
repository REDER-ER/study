#include <stdio.h>
int main()
{
   for(int i=1;i<=1000;i++){
        int sum=0;
        for(int j=1;j<i;j++)
   if(i%j==0)sum=sum+j;
   if(sum==i){
       printf("%d=1",i);
   for(int j=2;j<i;j++)
   if(i%j==0)printf("+%d",j);
   printf("\n");
    }
}
}
