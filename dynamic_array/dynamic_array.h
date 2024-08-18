//
// Created by Abhishek Belgaonkar on 18/08/24.
//
#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

// define a structure to represent a dynamic array
typedef struct {
  int *array;
  int size;
  int capacity;
} dynamic_array;

void init_array(dynamic_array *arr, int initial_capacity);
void add_element(dynamic_array * arr, int element);
void free_array(dynamic_array *arr);

#endif // DYNAMIC_ARRAY_H