#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        scanf("%d", &c);
        if(c%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
