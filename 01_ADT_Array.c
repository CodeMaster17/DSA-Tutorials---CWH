//HARSSHIT YADAV
//2105891
// Creating and implementing abstract data type
#include<stdio.h>
#include<stdlib.h> 
struct myArray{
    // total size allocated to the structure
    int total_size;

    // size that is used by the array
    int used_size;

    // the ptr below will point to the first bl;ock of the memory allocated to the structure
    int *ptr;

// dont forget to put semicolon after the end of the structure
};

// similarly we do this by using constructor in c++
// we passed the address of the structure
void createArray(struct myArray* a, int tSize, int uSize){
    // dfiofferent way of writing the same code above and below
    // (*a).total_size = tSize;
    a->total_size = tSize;

    // (*a).used_size = uSize;
    a->used_size = uSize;

    // (*a).ptr = (int *)malloc(tSize*sizeof(int));
    a->ptr = (int *)malloc(tSize*sizeof(int));
}
int main()
{
    // creating the instance of the structure of name marks
    struct myArray marks;
    createArray(&marks, 100,20);
    return 0;
}