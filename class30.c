#include<stdio.h>

void starPattern(int row){
      for(int i=0 ; i< row; i++)
     {
            for(int j= 1; j<=i;j++){
                printf("* ");
     }
            printf("\n");
}
}


   


void revPattern(int row)
{
       for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= row - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


int main(){
    int row, a;
    printf("Enter the number of rows in the triangle\n");
    scanf("%d",&row);
    printf("Enter your choice to print the type of star triangle\n");
    printf(" 1-> Normal triangle\n");
    printf(" 2-> Reverse triangle\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1: 
        starPattern(row);
        break;
    case 2:
        revPattern(row);
        break;
    
    default:
        printf("User entered wrong option, exiting the program\n");
        break;
    }
   
       
    
    
            
    


    return 0;
}