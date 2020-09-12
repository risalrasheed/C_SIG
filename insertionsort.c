#include<stdio.h>

void prt(int ar[], int n) {
  for(int i=0;i<n;i++) printf("%d ",ar[i]);
  printf("\n");
}

void main() {
  int n,ar[100];
  printf("Enter the number of elements ");
  scanf("%d",&n);
  printf("Enter the elements\n" );
  for(int i=0;i<n;i++) scanf("%d",&ar[i]);
  printf("Inputed array is ");
  prt(ar,n);

  //Insertion sort
  for(int i=1;i<n;i++) {
    int temp = ar[i];
    int j=i-1;
    while(j>=0 && ar[j]>temp) {
      ar[j+1]=ar[j];
      j--;
    }
    ar[j+1]=temp;
    prt(ar,n);
  }
  printf("Output is ");
  prt(ar,n);

}
