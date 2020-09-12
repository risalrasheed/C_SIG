#include<stdio.h>
void main() {
  int a=2;
  int b=3;
  int max=-1;
/*
  if(a>b)
    max=a;
  else
    max=b;*/
  max=a>b?a:b;
  printf("max is %d",max);
}
