//
// Created by Abhishek Belgaonkar on 17/08/24.
//

#include "selctionsort.h"
#include <stdio.h>

void selectionsort(int arr[], int n)
{
  int i, j, min, temp;
  for(i = 0; i < n - 1; i ++)
  {
    min = i;
    for(j = i + 1; j < n; j++)
    {
      if(arr[j] < arr[min])
      {
        min = j;
      }
    }
    temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}


void printarray(int arr[], int size){
  int i;
  for(i = 0; i < size; i++)
  {
    printf("%d", arr[i]);
  }
  printf("\n");
}

int main(){
  int arr[] = {9,8,7,6,5,4,3,2,1};
  int n = sizeof(arr)/ sizeof(arr[0]);
  printf("Sorted: \n");
  printarray(arr, n);
  return 0;
}
