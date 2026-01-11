/*
Question B
Given a pre-defined string, write a user-defined function without using any pre-defined string functions to convert and return:
1. The entire string in uppercase,
2. The string in sentence case, and
3. The string with each word capitalized.
*/

#include<stdio.h>

void uppercase(char *str){
  for(int i=0;str[i]!='\0';i++){
    if(str[i]<='z' && str[i]>= 'a'){
      str[i]= str[i] + ('A'-'a');
    }
  }
  printf("%s \n",str);
}

void sentencecase(char *str){
  for(int i=0;str[i]!='\0';i++){
    if(str[i]<='Z' && str[i]>= 'A'){
      str[i]= str[i] - ('A'-'a');
    }
  }
  if (str[0] >= 'a' && str[0] <= 'z') {
       str[0] = str[0] - 32;
  }
  printf("%s \n",str);
}


void capitalized(char *str){
  for(int i=0;str[i]!='\0';i++){
    if((i==0 || str[i-1]==' ') && str[i]<='z' && str[i]>= 'a'){
      str[i]= str[i] + ('A'-'a');
    }
  }
  printf("%s \n",str);
}




int main(){
  char str1[] = "Hello world, welcome to DSA in C!";
  char str2[] = "Hello world, welcome to DSA in C!";
  char str3[] = "Hello world, welcome to DSA in C!";

  uppercase(str1);
  sentencecase(str2);
  capitalized(str3);

  return 0;
}