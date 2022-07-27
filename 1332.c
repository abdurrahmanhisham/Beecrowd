#include <stdio.h>
int main ()
{
    char str[1000];
    int i,n;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%s",str);
        if (str[0]=='o' && str [1]=='n' ||str[1]=='n' && str [2]=='e' ||str[0]=='o' && str [2]=='e')
            printf("1\n");
        else if (str[0]=='t' && str [1]=='w' ||str[1]=='w' && str [2]=='o' ||str[0]=='t' && str [2]=='o')
            printf("2\n");
        else
                 printf("3\n");
    }
}
