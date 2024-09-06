#include <stdio.h>
#include <stdlib.h>
#include "merge2.h"

struct node* merge2(struct node* list1, struct node* list2) {
    struct node dummy; // Create a dummy node
    struct node* tail = &dummy; // Use tail to build the new list
    dummy.next = NULL;
    
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    
    // Attach the remaining elements
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }
    
    return dummy.next;
}

struct node* create(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->val = value;
    newnode->next = NULL;
    return newnode;
}

void printlist(struct node* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}
