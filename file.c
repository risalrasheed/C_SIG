#include<stdio.h>
#include<string.h>
void main() {
  FILE* fptr;
  int n=10;
  fptr=fopen("temp.bin","rb");
  //fprintf(fptr,"abc");
  //fprintf(fptr,"Hello World!");
  //fprintf(fptr,"Hello World!\n");
  //fprintf(fptr,"Hello World! %d",n);
  //char ch[100];
  char ch1,ch2;
  //printf("Values %d %d %d",SEEK_SET, SEEK_CUR, SEEK_END);
//fseek(fptr,3,0);
  //ch1=fgetc(fptr);

  ch2=fgetc(fptr);
  printf("%c",ch2);
  //fgets(ch,100,fptr);
  //printf("%c",ch);

  //fputs("new content",fptr);
  fclose(fptr);
}
