#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n*n;i++)
        if(n*n*n==i*n+n*(n-1))
    {
        printf("%d*%d*%d=%d=%d",n,n,n,n*n*n,i);
        for (int j=i+2;j<=i+2*(n-1);j=j+2)
            printf("+%d",j);
        printf("\n");
        break;
    }
    return 0;
}
