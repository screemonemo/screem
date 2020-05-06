#include <stdio.h>
int main(){
  FILE *fp=fopen("mytext.txt","r");
  int count=0;
  char c;
  while((c=fgetc(fp) && c!=EOF){
    ++count;}
  printf("The number of characters is : %d",count);
  return 0;}
