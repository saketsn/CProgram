#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    // ptr = (int*)malloc(n * sizeof(int));
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at no. %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at no. %d of this array is : %d\n", i, ptr[i]);
    }
    // USE OF realioc
    printf("Enter the new size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at no. %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the NEW value at no. %d of this array is : %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}