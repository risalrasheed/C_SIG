//string -> array of char

#include<stdio.h>
#include<string.h>


int len(char*);
void main() {
  char st1[] = "abd";
  char st2[] ="bbc" ;
  //int len2=0;
  int flag=0;
printf("%d",strcmp(st1,));
/*
  for(int i=0;st1[i]!='\0' || st2[i]!='\0';i++) {
    if(st1[i]==st2[i])
      flag=1;
    else {
      flag=0;
      break;
    }
  }
  if(flag==1)
    printf("Same");
  else
    printf("Not same");
*/
  /*
  len1=len(st1);
  len2=len(st2);
  if(len1 == len2) {
    for(int i=0;st1[i]!='\0';i++) {
      if(st1[i]==st2[i])
        flag=1;
      else {
        flag=0;
        break;
      }
    }
    if(flag==1)
      printf("Same");
    else
      printf("Not same");
  }
  else {
    printf("not equal");
  }
  */



  //printf("%d \n",st2);
//printf("%s ",st2);
}

int len(char* string) {
  int i=0;
  for(i=0;string[i]!='\0';i++);
  return i;
}
