#include <stdio.h>
int main()
{
    int i, j, n;
    char st[30];
    // input a string
    while(scanf("%s",st)!=EOF)
    {
        // number of position
        scanf("%d",&n);
        int arr[n];
        //input all positions
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        //displaying character of
        //string according to position
        for(i=0; i<n; i++)
        {
            printf("%c",st[arr[i]-1]);
        }
        printf("\n");
    }
    return 0;
}
