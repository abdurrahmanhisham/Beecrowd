#include<stdio.h>
int main()
{
    int A,B,i,sum=0;
    scanf("%d %d",&A,&B);
    for(i=A;i<=B;i++){
        sum+=i;
        A++;
    }
    printf("%d\n",sum);
}
