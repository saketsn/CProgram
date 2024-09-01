#include<stdio.h>

//void swap(int *x,int *y){
  //  int temp;
   // temp = *x;
  //  *x = *y;
  //  *y = temp;
    
//}

void abcd(int *x , int *y){
   int temp = *x;
    *x = temp + *y;
    *y = temp - *y;

}

int main(){
        int a= 35, b = 40;
        printf("Before original  values are a = %d and b = %d\n",a,b);
       // swap(&a,&b);
       abcd(&a,&b);
        printf("After abcd function values are a = %d and b = %d\n",a,b);
        





    return 0;
}