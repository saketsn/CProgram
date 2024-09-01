#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0;
    printf("Enter a number.");
    scanf("%d",&num);
    for(int i = 0,J=0; i<= 100; i++){
        num +=1; 
        printf("%d %d \n" , num,J);
    }




    return 0;
}