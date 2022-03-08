#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("1f%1f%1f",&a,&b,&c);
    if(a>=b+c || b>=a+c || c>=a+b){
        printf("NAO FORMA TRIANGULO");
    }
    else if(a*a==(b*b+c*c) || b*b==(a*a+c*c) || c*c==(a*a+b*b)){
        printf("TRIANGULO RETANGULO");
}
else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
printf("TRIANGULO OBTUSANGULO");
else if(a*a<b*b+c*c || b*b<c*c+a*a ||c*c<a*a+b*b){
    printf("TRIANGULO ACUTANGULO");
}
if(a==b && a==c ){
  printf("TRIANGULO EQUILATERO");
}
if((a==b && a!=c) || (a==c && b!=c) || (b==c && b!=a))
printf("TRIANGULO ISOSCELES");
}





