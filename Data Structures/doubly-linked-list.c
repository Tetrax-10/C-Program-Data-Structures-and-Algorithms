// Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *prev;
    int data;
    struct node *next;
} NODE;
NODE *start, *end, *tptr;

void InsertNode(int ele) {
    NODE *newnode;
    newnode = (NODE *)malloc(1 * sizeof(NODE));
    newnode->prev = newnode->next = NULL;
    newnode->data = ele;
    if (start == NULL)
        start = end = newnode;
    else {
        for (tptr = start; tptr->next != NULL && tptr->data < newnode->data;
             tptr = tptr->next)
            ;
        if (tptr->prev == NULL && ele < tptr->data) {
            tptr->prev = newnode;
            newnode->next = tptr;
            start = newnode;
        } else if (tptr->next == NULL && ele > tptr->data) {
            tptr->next = newnode;
            newnode->prev = tptr;
            end = newnode;
        } else {
            tptr->prev->next = newnode;
            newnode->prev = tptr->prev;
            newnode->next = tptr;
            tptr->prev = newnode;
        }
    }
}
void DeleteNode() {
    int ele;
    scanf("%d", &ele);

    for (tptr = start; tptr->data != ele; tptr = tptr->next)
        ;
    if (tptr == start) {
        tptr->next->prev = tptr->prev;
        start = tptr->next;
    } else if (tptr == end) {
        tptr->prev->next = tptr->next;
        end = tptr->prev;
    } else {
        tptr->prev->next = tptr->next;
        tptr->next->prev = tptr->prev;
    }
}
void Reverse() {
    NODE *temp;
    for (tptr = start; tptr != NULL; tptr = tptr->prev) {
        temp = tptr->prev;
        tptr->prev = tptr->next;
        tptr->next = temp;
    }
    start = temp->prev;
}

void DLLDisplay() {
    for (tptr = start; tptr != NULL; tptr = tptr->next)
        printf("%d ", tptr->data);
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
    DLLDisplay();
    // DeleteNode();
    // DLLDisplay();
    Reverse();
    DLLDisplay();
    return 0;
}
