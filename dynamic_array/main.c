//
// Created by Abhishek Belgaonkar on 18/08/24.
//

#include <stdio.h>
#include "dynamic_array.h"

int main() 
{
    dynamic_array arr;
    init_array(&arr, 2); // initialize with an array capacity of 2
    add_element(&arr, 10); // add elements to the array
    add_element(&arr, 20);
    add_element(&arr, 30);
    add_element(&arr, 40);
    for (int i = 0; i < arr.size; i++)
    {
        printf("Element %d: %d", i, arr.array[i]);
    }
    free_array(&arr);
    return 0;
}
