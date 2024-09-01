#include<stdio.h>
#include<conio.h>
void Multi(int num){

    for(int i= 1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, (num*i));
    }
}

int main()
{
        int n;
        printf("Enter the number you want multiplication of.\n ");
        scanf("%d",&n);
        Multi(n);







    return 0;
}
