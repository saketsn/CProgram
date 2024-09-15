#include<stdio.h>

int main(){

    int a= 343;
    float b =8.34;

    void *ptr;
    ptr = &a;
    
    printf(" the value of a is %d\n",(*((int*)ptr)));
    ptr = &b;
    printf(" the value of b is %f",(*((float*)ptr)));


    return 0;
}