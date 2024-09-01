#include<stdio.h>

int main(){

   /* int a= 444;
    int *ptr = &a;
    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",ptr + 1);
    printf("%d\n",ptr + 2); */

    int arr[] ={2,4,5,6,6,7};
    int *ptrarr = arr;
      printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);

    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1);

    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2);

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);

    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));

    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));



    return 0;
}