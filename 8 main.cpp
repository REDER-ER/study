#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d-%d-%d",&a,&b,&c);
    {
        if(a%400==0)
        d=1;
    else if(a%4==0&&a%100!=0)
        d=1;
    else d=0;
    }
    if(d==1&&b==1)
        printf("%d",c);
    if(d==1&&b==2)
        printf("%d",c+31);
    if(d==1&&b==3)
        printf("%d",c+60);
    if(d==1&&b==4)
        printf("%d",c+91);
    if(d==1&&b==5)
        printf("%d",c+121);
    if(d==1&&b==6)
        printf("%d",c+152);
    if(d==1&&b==7)
        printf("%d",c+182);
    if(d==1&&b==8)
        printf("%d",c+213);
    if(d==1&&b==9)
        printf("%d",c+244);
    if(d==1&&b==10)
        printf("%d",c+274);
    if(d==1&&b==11)
        printf("%d",c+305);
    if(d==1&&b==12)
        printf("%d",c+335);
    if(d==0&&b==1)
        printf("%d",c);
    if(d==0&&b==2)
        printf("%d",c+31);
    if(d==0&&b==3)
        printf("%d",c+59);
    if(d==0&&b==4)
        printf("%d",c+90);
    if(d==0&&b==5)
        printf("%d",c+120);
    if(d==0&&b==6)
        printf("%d",c+151);
    if(d==0&&b==7)
        printf("%d",c+181);
    if(d==0&&b==8)
        printf("%d",c+212);
    if(d==0&&b==9)
        printf("%d",c+243);
    if(d==0&&b==10)
        printf("%d",c+273);
    if(d==0&&b==11)
        printf("%d",c+304);
    if(d==0&&b==12)
        printf("%d",c+334);
    return 0;
}
