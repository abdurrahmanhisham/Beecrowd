#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    if (c > d){
        d = d + 60;
        e = d - c;
        if (a == b ){
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n", e);
        }
        else if (b > a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b-a-1, e);
        }
        else if (a > b){
            b = b + 24;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b-a-1, e);
        }
    }
    else {
        if (c == d)e = 0;
        else e = d-c;
        if (a == b ){
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n", e);
        }
        else if (b > a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b-a, e);
        }
        else if (a > b){
            b = b + 24;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b-a, e);
        }
    }
    return 0;
}
