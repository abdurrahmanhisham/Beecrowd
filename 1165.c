#include <stdio.h>
int main() {
    int T,n,i,p;
    scanf("%d",&T);
    while(T--)
    {
        p=1;
        scanf("%d",&n);
        for(i=2; i<n; i++)
        {
            if(n%i==0)
                p=0;
        }
        if(p)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n",n);
    }
     return 0;
}
