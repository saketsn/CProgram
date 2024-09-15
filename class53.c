#include<stdio.h>
#include<string.h>

int main(){
    int a = 65;
    int *ptr = NULL;
   // ptr = &a;
    if(ptr != NULL){
    printf("the value of a = %d",*ptr);
    }else{
        printf("Null pointer");
    }
    return 0;

}