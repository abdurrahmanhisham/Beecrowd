#include <stdio.h>

int main() {

   int t,i,a,b;
   float sum=0;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
{

    scanf("%d %d",&a,&b);
    if(a==1001)sum+=(1.50*b);
    if(a==1002)sum+=(2.50*b);
    if(a==1003)sum+=(3.50*b);
    if(a==1004)sum+=(4.50*b);
    if(a==1005)sum+=(5.50*b);
}
printf("%.2f\n",sum);

    return 0;
}
