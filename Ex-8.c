#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i=0;
    char *ptr;
    while (i<3)
    {
        printf("Enter the number of characters in your employee Id\n");
        scanf("%d",&chars);
        ptr = (char*)malloc((chars+1)*sizeof(char));
        printf("Enter the %d : employee Id\n",i);
        scanf("%s",ptr);
        printf("Your employee Id id = %s\n",ptr);
        free(ptr);

        i = i+1;
    }
    


    return 0;
}