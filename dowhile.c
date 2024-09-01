#include <stdio.h>
#include <conio.h>

int main()
{

    int num, i = 0;
    printf("Enter a number");
    scanf("%d", &num);

    do
    {
        printf("%d\n", i);
        i = i + 1;
    } while (i < num);

    return 0;
}