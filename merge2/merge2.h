#ifndef MERGE2_H
#define MERGE2_H

struct node {
    int val;
    struct node* next;
};

struct node* merge2(struct node* list1, struct node* list2);
struct node* create(int value);
void printlist(struct node* head);

#endif // MERGE2_H
