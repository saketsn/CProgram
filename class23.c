#include <stdio.h>

void ArrayInsert(int size, int array[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element of array on %d\n", i);
        scanf("%d", &array[i]);
    }
}

void ArrayDisplay(int size, int array[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("Element of i position is = %d\n", array[i]);
    }
}

int main()
{
    int size = 5;
    int array[size];
    ArrayInsert(size, array);
    ArrayDisplay(size, array);

    return 0;
}