//HARSSHIT YADAV
//2105891
//Creation and travbersal in linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// creating function for traversal in linked list
void traversalLinkedList(struct Node *ptr){
    while(ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allocating memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    

    // linking the nodes
    // linking 1st and second nodes
    head ->data = 7;
    head->next = second;

    // linking second and third nodes
    second->data = 11;
    second->next = third;

    // terminating list at third node
    third->data = 66;
    third->next = NULL;

    // printf("%d",third->data);

    // calling the traversal function
    traversalLinkedList(head);
    return 0;
}