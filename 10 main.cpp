#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf,%lf",&a,&b);
    c=sqrt((a-2)*(a-2)+(b-2)*(b-2));
    d=sqrt((a-2)*(a-2)+(b+2)*(b+2));
    e=sqrt((a+2)*(a+2)+(b-2)*(b-2));
    f=sqrt((a+2)*(a+2)+(b+2)*(b+2));
    if(c<=1||d<=1||e<=1||f<=1)
        printf("10");
    else printf("0");
    return 0;
}
