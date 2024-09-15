#include<stdio.h>
#include<stdlib.h>
int main(){

        int m, n, sum = 0;
        int a[3][4], b[4][2], result[3][2];

        printf("Enter the element of first matrix :\n");
        for(int i= 0; i < 3; i++)
        {
            for(int j= 0; j < 4; j++)
            {
                scanf("%d\t",&a[i][j]);
            }
            printf("\n");
        }

        printf("Enter the element of 2nd matrix :\n");
        for(int i= 0; i < 4; i++)
        {
            for(int j= 0; j < 2; j++)
            {
                scanf("%d\t",&b[i][j]);
            }
            printf("\n");
        }

       //Loop to calculate result
        for(int i= 0; i < 3; i++)
        {
            for(int j= 0; j < 2; j++)
            {   
                for(int k = 0;k < 4; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
        //Loop to print result
        printf("The result is :\n");
         for(int i= 0; i < 4; i++)
        {
            for(int j= 0; j < 2; j++)
            {
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }



    return 0;
}