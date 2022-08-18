//HARSSHIT YADAV
//2105891
//Practice on how to make a linked list in C
#include<stdio.h>
struct MyStructure{
    int data;
    struct Node *ptr;
};
int main()
{
    struct MyStructure *head;
    struct MyStructure *second;
    struct MyStructure *third;


    // allocating memory to the nodes in the linked list
    head = (struct MyStructure*)malloc(sizeof(int));
    second = (struct MyStructure*)malloc(sizeof(int));
    third = (struct MyStructure*)malloc(sizeof(int));

    // stroing data in the data part of the strucuture
    return 0;
}