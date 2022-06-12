// Singly Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} NODE;
NODE *start, *tptr, *prev;

void InsertNode(int ele) {
    NODE *newnode;
    newnode = (NODE *)malloc(1 * sizeof(NODE));
    newnode->data = ele;
    newnode->next = NULL;
    if (start == NULL)
        start = newnode;
    else {
        for (prev = NULL, tptr = start;
             tptr != NULL && tptr->data < newnode->data;
             prev = tptr, tptr = tptr->next)
            ;
        if (start == tptr) {
            newnode->next = tptr;
            start = newnode;
        } else {
            prev->next = newnode;
            newnode->next = tptr;
        }
    }
}
void DeleteNode() {
    int ele;
    scanf("%d", &ele);
    for (prev = NULL, tptr = start; tptr != NULL && tptr->data != ele;
         prev = tptr, tptr = tptr->next)
        ;
    if (tptr == NULL)
        printf("Element is not present in the list\n");
    else if (start == tptr)
        start = tptr->next;
    else
        prev->next = tptr->next;
    free(tptr);
}

int MidNode() {
    NODE *tptr1, *tptr2;
    tptr1 = tptr2 = start;
    while (tptr2 != NULL && tptr2->next != NULL) {
        tptr1 = tptr1->next;
        tptr2 = tptr2->next->next;
    }
    return tptr1->data;
}

void Reverse() {
    NODE *before = NULL, *tptr = start, *after;
    while (tptr != NULL) {
        after = tptr->next;
        tptr->next = before;
        before = tptr;
        tptr = after;
    }
    start = before;
}

void SLLDisplay() {
    for (tptr = start; tptr != NULL; tptr = tptr->next)
        printf("%d->", tptr->data);
    printf("\n");
}

void GetInput() {
    int num;
    while (1) {
        scanf("%d", &num);
        if (num == -1)
            break;
        InsertNode(num);
    }
}

int main() {
    GetInput();
    SLLDisplay();
    // DeleteNode();
    // SLLDisplay();
    printf("Middle node value : %d\n", MidNode());
    Reverse();
    SLLDisplay();
    return 0;
}
