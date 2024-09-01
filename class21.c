#include<stdio.h>

int factorial(int num){

    if(num == 1 || num == 0)
    {
        return 1;
    }else{
        return num * factorial(num - 1);
    }

}

int main()
{
    int n;
    printf("Enter a number which you want to find factorial.\n");
    scanf("%d",&n);
    printf("\n The factorial of the %d is %d",n, factorial(n));




    return 0;
}