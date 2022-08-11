#include<stdio.h>
#include<string.h>
int main()
{
    int i,m;
    char ch[102];
    while(scanf("%d",&m)!=EOF){
        getchar();
        for(i = 0;i < m;i++){
            gets(ch);
        }
        printf("Ciencia da Computacao\n");
    }
    return 0;
}
