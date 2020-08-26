#include<stdio.h>

/*Loops -> used for repeated execution of
a set of statements
Loops are of two types:
Entry Controlled: while and for
Exit Controlled:  do while
*/

void main() {
  int i=0;

//While loop
  i=6;
  do
  { // loop variable -> i
    //i=0->1->2->3->4->5
    printf("do While loop Value of i is %d\n",i);
    i++; //updation
  }while(i<5);


//For loop
  for(int i=0;i<5;i++) {
    //i=6

    printf("In for loop i is %d\n",i);// 0 1 2 3 4 5

  }


//Do while loop
   i=0;
  while(i<5) {

    printf(" while loop i is %d\n",i);//5
    i++;
    //i=6
  }

}
