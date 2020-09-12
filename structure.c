#include<stdio.h>
//user defined data types are created by users
//Structure -> container of different variables

struct Box { //Try using typedef
  int a;
  char b;
} ;
void main() {
  typedef struct Box abc;
  abc pencil;
  abc pencil1;
  abc pencil2;
  abc pencil3;
  pencil.a=5;
  pencil.a++;
  pencil.b='z';
  printf("a: %d b: %c\n",pencil.a,pencil.b );

  /* // Checking for variable declarations just after structure definition


  */
  //printf("%ld\n",sizeof(a) );
}
