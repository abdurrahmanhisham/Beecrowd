#include <stdio.h>
int main(){
  int l, x, y;
  char p;

  scanf("%d", &l);
  scanf("%d %c %d", &x, &p, &y);

  if(p=='+')
    if(x+y<=l)
      printf("OK\n");
    else
      printf("OVERFLOW\n");
  else
    if(x*y<=l)
      printf("OK\n");
    else
      printf("OVERFLOW\n");

  return 0;
}
