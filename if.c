#include<stdio.h>
int main()
{
    int n;
    const char *cases[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("Enter the number \n");
    scanf("%d",&n);

    if(n >=1 && n<=9){
        printf("%s",cases[n]);
    }else{
        printf("Greater than 9 or smaller than 1");
    }

    return 0;
}