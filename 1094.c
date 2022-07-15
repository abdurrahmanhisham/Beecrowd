#include<Stdio.h>
int main()
{
    int i,n,t,l,total=0,C=0,R=0,S=0;
    char c;
    double x,y,z;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&l,&c);
        if(C=='S')S+=l;
        else if(C=='R')R+=l;
        else C+=l;
    }
    total=C+R+S;
    x=(C*100.00)/total;
    y=(R*100.00)/total;
    z=(S*100.00)/total;
    printf("total:%d cobaias\n",total);
    printf("Total de coelhos:%d\n",C);
    printf("Total de ratos:%d\n",R);
    printf("Total de sapos:%d\n",S);
    printf("Percentual de coelhos:%.2lf %%\n",x);
    printf("Percentual de ratos:%.2lf %%\n",y);
    printf("Percentual de sapos:%.2lf %%\n",z);
    return 0;
}
