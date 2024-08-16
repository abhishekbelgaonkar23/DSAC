//
// Created by Abhishek Belgaonkar on 16/08/24.
//
#include "binarysearch.h"
#include<stdio.h>
int binary_search(int arr[], int left, int right, int target){
  while(left <= right){
    int mid = left + (right + left) / 2;

    if(arr[mid] == target){
      return mid;
    }

    if(arr[mid] < target){
      left = mid + 1;
    }

    else{
      right = mid - 1;
    }
  }
  return -1;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target = 10;
  printf("%d\n", binary_search(arr,0 , size, target));
  return 0;
}