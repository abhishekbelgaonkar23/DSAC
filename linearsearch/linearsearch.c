//
// Created by Abhishek Belgaonkar on 17/08/24.
//

#include "linearsearch.h"
#include<stdio.h>
int linear_search(int arr[], int size, int x){
    for(int i = 0; i < size; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 2, 3, 5, 5, 6, 7, 8, 9, 10};
    int size = (sizeof(arr) / sizeof(arr[0]));
    printf("%d", linear_search(arr, size, 5));
    return 0;
}