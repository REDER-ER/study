#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int b[100000],a[100000],c[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x,j,sum=0;
        scanf("%d",&x);
            a[i]=x;
        int tmp=x;
        for(j=0;tmp!=0;j++)
        {
            b[j]=tmp%2;
            tmp/=2;
        }

    for(int k=0;k<j;k++)
    {
        sum+=b[k]*pow(2,j-1-k);
    }
    c[i]=sum;
    }
    for(int v=0;v<n;v++)
        {
        if(a[v]==c[v])
    {
        printf("Yes");
        printf("\n");
    }
    else
    {
        printf("No");
        printf("\n");
    }
        }
    return 0;
}
