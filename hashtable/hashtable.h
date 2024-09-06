// hashtable.h

#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <stddef.h>

// define the key-value pair structure
typedef struct KeyValuePair
{
	char *key;
	int value;
	struct KeyValuePair *next;
} KeyValuePair;

// define the hashtable structure
typedef struct hashtable
{
	KeyValuePair **buckets; // array of pointers to KeyValuePairs
	size_t size; 		   // number of buckets in the hash table	
} hashtable;

// function prototypes
hashtable *create_table(size_t size);
void free_table(hashtable *table);
unsigned long hash_function(const char *key);
void insert(hashtable *table, const char *key, int *found);
void delete(hashtable *table, const char *key)
 
#endif