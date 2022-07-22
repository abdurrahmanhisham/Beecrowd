#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    char x[2];
    int i,j,n=11,o=1;
    scanf("%s",&x);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
        scanf("%lf",N[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<n;j++){
                sum+=N[i][j];
        }
    }
    n--;
    o++;
    if(x[0]=='S') printf(".lf\n",sum);
    else printf("%.lf\n",sum/30.0);
    return 0;
}
