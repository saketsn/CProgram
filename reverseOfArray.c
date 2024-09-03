#include<stdio.h>
#define MAX_VALUE 100;
void rev(int size,int arr[size]){
    for(int i=size-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }

}
//using swap method to reversal an array
void revSwap(int size, int arr[size]){
    int temp;
    for(int i = 0;i<size/2;i++){
        temp = arr[i];
        arr[i] = arr[size-1];
        arr[size -1] = temp;
    }
    for(int i = 0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

void insert(int size,int arr[size]){
    for(int i =0;i<size;i++){
        printf("Enter the element at %d index :\n",i);
        scanf("%d",&arr[i]);
    }

}

int main(){
    int size;
   
    printf("Enter the size of array:\n");
    scanf("%d",&size);
     int arr[size];
    insert(size,arr);
   // rev(size,arr);
   revSwap(size,arr);

    return 0;

}