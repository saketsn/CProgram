#include<stdio.h>

int fib_recursive(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}

int main(){
    int n;
    printf("Enter the number you want to print fib series upto.");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("%d\n", fib_recursive(i));
    }




    return 0;
}