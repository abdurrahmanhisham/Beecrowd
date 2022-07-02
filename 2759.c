#include<Stdio.h>
int main()
{
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    printf("A = %c, B = %c, C = %c\n",a,b,c);
    printf("A = %c, B = %c, C = %c\n",b,c,a);
    printf("A = %c, B = %c, C = %b\n",c,a,b);
    return 0;
}
