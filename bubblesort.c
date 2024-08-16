//
// Created by Abhishek Belgaonkar on 17/08/24.
//

#include "bubblesort.h"
#include<stdio.h>

void bubblesort(int arr[], int n)
{
  for(int i = 0; i < n - 1; i++)
  {
    int swapped = 0;
    for(int j = 0; j < n - i - 1; j++)
    {
      if(arr[j] > arr[j +1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = 1;
      }
    }
    if(!swapped)
    {
      break;
    }
  }
}

void printarr(int arr[], int n)
{
  for(int i = 0; i < n; i++)
  {
    printf("%d", arr[i]);
  }
  printf("\n");
}

int main()
{
  int arr[] = { 1, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int n = sizeof(arr) / sizeof(arr[0]);
  bubblesort(arr, n);
  printarr(arr, n);
  return 0;
}