#include<stdio.h>
void main() {
  int ar[] ={1,2,3};
  int ar[3];
  int *ptr=ar;
  for(int i=0;i<3;i++) {
    printf("%d ",ptr[i]);
  }
//ptr

}
