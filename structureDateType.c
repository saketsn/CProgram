#include<stdio.h>
struct Student{
    int id;
    int marks;
    char fav_char;
} ;
struct Student raj,bipul,abhi;

void print(){
    printf(" marks of raj = %d",raj.marks);
}

int main(){

   //struct Student raj,bipul,abhi;
    raj.id = 1;
    bipul.id =2;
    abhi.id = 3;
    raj.marks = 499;
    bipul.id = 444;
    abhi.id = 450;
    raj.fav_char ='a';
    bipul.fav_char = 'b';
    abhi.fav_char = 'c';
   // printf("raj got %d % marks",raj.marks);
   print();
    return 0;
}