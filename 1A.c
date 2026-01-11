/*Question A
Declare a pre-defined array of integers. Write a function that deletes a specified element from the array and then stores and prints the updated array.
Note: Do not use any extra array.*/

#include<stdio.h>
#include <stdlib.h>

void arrElementDeleter(int *arr, int *n, int key){
  int i =0, track = -1;
  for(i=0;i<*n;i++){
      if(arr[i]==key){
        track = i;
      }
  }
  if(track==-1){
    printf("Given key does not exist in the array");
    exit(0); 
  }
  for(i=track; i<*n-1;i++){
    arr[i]=arr[i+1];
  }



}

#include<stdio.h>

int main(){

  int arr[] = {0,1,2,3,4,5,6,7,8,9};
  int n = 10;
  int key = 4;

  arrElementDeleter(arr,&n,key);
  for(int i=0; i < n-1; i++){
    printf("%d ",arr[i]);
  }


  return 0;
}

