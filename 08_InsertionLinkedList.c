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

// creating a function to insert a between
struct Node *insertAtFirst(struct Node *head, int data ){
    struct Node * ptr= (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
}

// creating function to insert between index
struct Node *insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr= (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while(i !=index-1){
        p = p->next;
        i++;
    }  
    ptr->data=data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocating memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    

    // linking the nodes
    // linking 1st and second nodes
    head ->data = 7;
    head->next = second;

    // linking second and third nodes
    second->data = 11;
    second->next = third;

    // third node to fourth node
    third->data = 66;
    third->next = fourth;

    // terminating list at fourth node
    fourth->data = 6612312;
    fourth->next = NULL;

    // printf("%d",third->data);

    // calling the traversal function
    // traversalLinkedList(head);
    // head=insertAtFirst(head,567);
    head=insertAtIndex(head,121,1);
    traversalLinkedList(head);
    return 0;
}