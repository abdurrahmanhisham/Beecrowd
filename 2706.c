#include<stdio.h>

int main()
{
    int a[3],b[3],s=0,i,j;

    //the number of meals available
    //for chicken, beef and pasta
    for (i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    // the number of meals requested
    //for chicken, beef and pasta.
    for (i=0; i<3; i++)
    {
        scanf("%d",&b[i]);
    }
    // calculating the number
    //of passengers who will
    //not receive meals
    for(j=0; j<3; j++)
    {
        if (b[j]>a[j])
        {
            s+=(b[j]-a[j]);
        }
    }
    printf("%d\n",s);

    return 0;
}
