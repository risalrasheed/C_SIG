#include<stdio.h>

void prt(int a[], int n) {
  for(int i=0;i<n;i++) {
    printf("%d ",a[i]);
  }
}
void main() {
  int n,ar[100];
  printf("Enter the number of elements");
  scanf("%d",&n); // n read

  //array read
  for(int i=0;i<n;i++) {
    scanf("%d",&ar[i]);
  }

  //insertions sort
  for(int i=1;i<n;i++) { //i=1
    int j=i-1;
    int temp=ar[i];
    while(j>=0 && ar[j]>temp) {

      ar[j+1]=ar[j];
      j--;
    }
    ar[j+1]=temp;
    //printf("\nIteration %d is ",i);
    //prt(ar,n);
  }
  printf("\nOutput: ");
  prt(ar,n);
}
