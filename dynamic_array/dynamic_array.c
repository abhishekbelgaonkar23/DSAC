//
// Created by Abhishek Belgaonkar on 18/08/24.
//

#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

// initialize the array
void init_array (dynamic_array *arr, int initial_capacity)
{
	arr -> array = (int *)malloc(initial_capacity * sizeof(int));
	if (arr -> array == NULL) 
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	arr -> size = 0;
	arr -> capacity = initial_capacity;
}

// add an element to the dynamic array
void add_element(dynamic_array *arr, int element)
{
	if (arr -> size == arr -> capacity) 
	{
		arr -> capacity *= 2;
		int *new_array = (int *)realloc(arr -> array, arr -> capacity * sizeof(int));
		if (new_array == NULL) 
		{
			fprintf(stderr, "Memory reallocation failed\n");
			exit(EXIT_FAILURE);
		}
		arr -> array = new_array;
	}
	arr -> array[arr -> size++] = element;
}

// free the memory associated for the dynamic array
void free_array(dynamic_array *arr)
{
	free(arr -> array); // free the allocated memory
	arr -> array = NULL;
	arr -> size = 0;
	arr -> capacity = 0;
}







