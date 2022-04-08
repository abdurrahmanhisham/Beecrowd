#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0,m,l,j,c=0;
    char a[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char s,d[100],st[100],t;
    char ch;
while(scanf("%c",&ch) != EOF){

        if(ch == ' '){
              printf("%c",32);
        }else{
    for(i = 0 ;i<48 ;i++){
        if(ch == a[i]){
         printf("%c",a[i-1]);
         break;
          }
          else if(ch == '\n'){
              printf("\n");
              break;
          }
        }
      }
     }
        return 0;
}
