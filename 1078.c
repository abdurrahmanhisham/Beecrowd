#include <stdio.h>
int main()
{
    int i,N;
    scanf("%d", &N);
    for(i = 1;i < 11;i++){
        printf("%d x %d = %d\n", i, N, N*i);
    }
    return 0;
}
