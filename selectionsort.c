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

  //Selection sort
  for(int i=0;i<n-1;i++) {
    int index = i;
    for(int j=i+1;j<n;j++) {
      if(ar[j]<ar[index]) index=j;
    }
    int temp=ar[index];
    ar[index]=ar[i];
    ar[i]=temp;
    prt(ar,n);
  }
  printf("Output is ");
  prt(ar,n);
}
