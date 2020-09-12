#include<stdio.h>
void main() {
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=(a>b)?a:b;
  // condition?var1:var2
  printf("C is %d",c);
}
