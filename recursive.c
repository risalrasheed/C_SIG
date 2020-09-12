#include<stdio.h>
//int fn(float a); //function decl
//Function def:

int fact(int n) {
  printf("function \n");
  fact(3);
}

void main() {

  int n=5;//0
  int fac=1; //120
  fac=fact(5);
  printf("factorial is %d",fac);

}
