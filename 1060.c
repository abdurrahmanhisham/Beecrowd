#include<stdio.h>
int main()
{
    int i,count=0;
    int n;
    for(i=1;i<=6;i++){
        scanf("%d",&n);
    if(n>0)
        count++;
    }
    printf("%dvalores positivos\n",count);
}
