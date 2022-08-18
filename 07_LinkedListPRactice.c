//HARSSHIT YADAV
//2105891
//Creating a linked list on my own
#include<stdio.h>
#include<stdlib.h>

// creating the structure for linked list
struct Harshit{
    int num;
    struct Harshit *pointer;
};

void printingValues(struct Harshit *points){
    while(points != NULL)
    {
        printf("Elements is:%d \n", points->num);
        points = points->pointer;
    }
}
int main()
{
    struct Harshit *first;
    struct Harshit *second;
    struct Harshit *third;

    // allocating memory to the memory locaations
    first = (struct Harshit *)malloc(sizeof(struct Harshit));
    second = (struct Harshit *)malloc(sizeof(struct Harshit));
    third = (struct Harshit *)malloc(sizeof(struct Harshit));

    // allocating memory to the locations
    // first to second
    first->num = 990;
    first->pointer = second;
    
    // second to third
    second->num = 239884;
    second->pointer = third;

    // third to fourth
    third->num  = 92132190;
    third->pointer = NULL;

    printingValues(first);
    return 0;
}