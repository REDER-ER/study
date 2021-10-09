#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int cnt8, cnt5, cnt3, cnt2, cnt1;
   double max=2000;
   double r1=0.0063, r2=0.0066, r3=0.0069, r5=0.0075, r8=0.0084;
   for(int c8=0;c8<=2;c8++)
    for(int c5=0;c5<=(20-c8*8)/5;c5++)
    for(int c3=0;c3<=(20-c5*5-c8*8)/3;c3++)
    for(int c2=0;c2<=(20-c3*3-c5*5-c8*8)/2;c2++)
   {
       int c1=20-2*c2-3*c3-5*c5-8*c8;double temp_money;
       temp_money=2000*pow(1+12*r1,c1)*pow(1+24*r2,c2)*pow(1+36*r3,c3)*pow(1+60*r5,c5)*pow(1+96*r8,c8);
       if(temp_money>max){max=temp_money,cnt8=c8,cnt5=c5,cnt3=c3,cnt2=c2,cnt1=c1;}
   }
   printf("%d %d %d %d %d\n%.2f",cnt8,cnt5,cnt3,cnt2,cnt1,max);
}
