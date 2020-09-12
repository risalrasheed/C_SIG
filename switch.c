#include<stdio.h>

void main() {
  printf("\t\t\t\tMENU\n");
  printf("\t\t\t_________________\n");
  printf("1)Sum\n");
  printf("2)Difference\n");
  printf("3)Multiplication\n");
  printf("4)Division\n");
  printf("Select Option ");
  int opt;
  scanf("%d",&opt);

  switch(opt) {

    case 10:
      printf("Option 10\n");
      break;
    case 2:
      printf("Option 2\n");
    case 3:
      printf("Option 3\n");
      break;
    case 5:
      printf("Option 4\n");
       //fall through
    default:
      printf("Unknown Option\n");
      break;
    case 1:
      printf("Option 1\n");





    }

    printf("Program terminating");


}
