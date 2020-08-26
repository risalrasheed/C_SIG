#include<stdio.h>
/*
  First execute the program as it is
  Then comment "int a=5;" line and uncomment "float a=5;"
  Observe the different outputs are they same?
*/
void main() {
  float a=5;
  //int a=5;
  int b=3;
  if(a/b>1) { //1.67>1?
    printf("condition true");
  }
  else
    printf("Condition false");
}
