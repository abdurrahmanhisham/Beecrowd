#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(A + B == C || C + A == B ||  C + B == A) printf("S\n");
    else if(A - B == 0 || A - C == 0 || B - C == 0) printf("S\n");
    else printf("N\n");
    return 0;
}
