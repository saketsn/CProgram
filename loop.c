#include<stdio.h>
#include<conio.h>

int main(){

    int num;
    printf("Enter a number Print it's table.");
    scanf("%d",&num);
    for(int i= 1; i<= 10; i++)
    {
        printf("%d x %d = %d \n",num, i, (num * i));
    }

    return 0;
}