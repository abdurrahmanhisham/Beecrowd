#include<stdio.h>
int main()
{
float n;
scanf("%f",&n);
if(n<0 || n>100){
printf("Fora de intervalo");
}
else if(n<=25){
printf("Interval (0,25]");
}
else if(n<=50){
printf("Intervalo (25,50]");
}
else if(n<=75){
printf("Intervalo (50,75]");
}
else if(n<=100){
printf("Intervalo (75,100]");
}
}
