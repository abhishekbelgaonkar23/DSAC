#include <stdio.h>
#include "merge2.h"

int main() {

    struct node* list1 = create(1);
    list1->next = create(2);
    list1->next->next = create(4);

    struct node* list2 = create(1);
    list2->next = create(3);
    list2->next->next = create(4);
    
    struct node* mergedList = merge2(list1, list2);
    
    printf("Merged List: ");
    printlist(mergedList);
    
    return 0;
}
