#include<stdio.h>

int main()
{
    int R;
    double pi,vol;
    pi=3.14159;
    scanf("%d",&R);
    vol=((4/3.0)*pi*R*R*R);
    printf("VOLUME = %.3lf\n",vol);
    return 0;

}

