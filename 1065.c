#include<stdio.h>
main()
{
    int n,c=0,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            c++;
        }
    }
    printf("%d valores pares\n",c);
    return 0;
}
