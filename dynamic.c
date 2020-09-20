#include<stdio.h>
#include<stdlib.h>
void main() {
  int* ar;
  int n;
  printf("Enter the number of elements ");
  scanf("%d",&n);
  ar=(int*)malloc(sizeof(int)*n);

  for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
  printf("Array is ");
  //for(int i=0;i<n;i++)
  ar++;
  printf("%d ",*ar);
}
