#include<stdio.h>
void display(int mat[10][10],int r, int c) {
  for(int i=0;i<r;i++) {
    for(int j=0; j<c; j++){
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
}

void main() {
  int mat[10][10],ar[10][10],r,c,count=0;
  printf("\nEnter the number of rows and columns ");
  scanf("%d%d",&r,&c);
  //matrix read
  printf("Enter values\n");
  for(int i=0;i<r;i++) {
    for(int j=0; j<c; j++){
      scanf("%d",&mat[i][j]);
    }
  }
  //displaying matrix
  printf("Displaying matrix\n");
  display(mat,r,c);
  ar[0][0]=r;
  ar[0][1]=c;
  for(int i=0;i<r;i++) {
    for(int j=0;j<c;j++) {

      if(mat[i][j]!=0) {
        count++;
        ar[count][0]=i;
        ar[count][1]=j;
        ar[count][2]=mat[i][j];
      }
    }
  }//loop exit
  ar[0][2]=count;
  printf("3 column representation\n");
  display(ar,count+1,3);
}
