#include <stdio.h>
int main()
{
char A,B,C;
    for(A='X';A<='Z';A++)
       for(B='X';B<='Z';B++)
          for(C='X';C<='Z';C++)
    if(A!=B&&A!=C&&B!=C&&A!='X'&&C!='Z'&&C!='X')
        printf("A=%c\nB=%c\nC=%c",A,B,C);
        return 0;
}
