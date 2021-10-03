#include <stdio.h>
int main()
{
    int A1=1,A2=1,A,N=2,sum=2;
    int N1,F1=0,N2,F2=0,N3,F3=0;
    while (1){
        A=A1+2*A2;
        sum=sum+A;
        N++;
        if(sum>=100&&F1==0){N1=N-1;F1=1;}
         if(sum>=1000&&F2==0){N2=N-1;F2=1;}
         if(sum>=10000&&F3==0){N3=N-1;F3=1;break;}
         A1=A2;
         A2=A;
    }
    printf("%d\n%d\n%d",N1,N2,N3);
}
