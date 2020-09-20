#include<stdio.h>
#include<stdlib.h>
void push(int* ar, int val, int* t) {
  ar[++(*t)]=val;

}
int pop(int*ar, int*t) {
  return ar[(*t)--];
}

void main() {
  int *stack,top = -1;
  int n;
  printf("Enter the number ");
  scanf("%d",&n);
  stack=(int*)malloc(sizeof(int)*n);
  printf("Enter the values ");
  for(int i=0;i<n;i++)
    push(stack,i,&top); //push-0 1


  printf("\nAfter push values is ");
  for(int i=0;i<=top;i++)
    printf("%d ",stack[i]);
  printf("\nValues %d %d %d",stack[0],stack[1],stack[2]);

  int v=pop(stack,&top);
  printf("\nAfter pop values is ");
  for(int i=0;i<=top;i++)
    printf("%d ",stack[i]);
  printf("Poped value is %d",v);
}
