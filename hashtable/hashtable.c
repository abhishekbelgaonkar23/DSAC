// hashtable.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashtable.h"

// hash function djb2 by dan bernstein
unsigned long hash_function(const char *key)
{
	unsigned long hash = 5381;
	int c;
	while((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return hash;
}

// create a new hashtable
hashtable *create_table(size_t size)
{
	hashtable *table = (hashtable *)malloc(sizeof(hashtable));
	if (!table)
	{
		return NULL;
	}
	
	for (size_t i = 0; i < size; i++)
	{
		table -> buckets[i] = NULL;
	}
	return table;
}

// free the hashtable
void free_table(hashtable *table){
	for (size_t i = 0; i < table -> buckets[i]);
	while (pair) 
	{
		key
	}
}