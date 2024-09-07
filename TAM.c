#include<stdio.h>
#include<string.h>
typedef   struct driver
{
    char name[34];
    char dlNo[45];
    char route[44];
    int kms;
} dr;
int main(){
    dr d1,d2,d3;
    printf("Enter the details of driver No 1 \n");
    printf("Enter the name of 1st driver \n");
    scanf("%s",&d1.name);

    printf("Enter the dlNo. of 1st driver \n");
    scanf("%s",&d1.dlNo);

    printf("Enter the route of 1st driver \n");
    scanf("%s",&d1.route);
    
    printf("Enter the km of 1st driver \n");
    scanf("%d",&d1.kms);

    printf("Enter the details of driver No 2 \n");
    printf("Enter the name of 2nd driver \n");
    scanf("%s",&d2.name);

    printf("Enter the dlNo. of 1st driver \n");
    scanf("%s",&d2.dlNo);

    printf("Enter the route of 1st driver \n");
    scanf("%s",&d2.route);
    
    printf("Enter the km of 1st driver \n");
    scanf("%d",&d2.kms);

    printf("Enter the details of driver No 3 \n");
    printf("Enter the name of 3rd driver \n");
    scanf("%s",&d3.name);

    printf("Enter the dlNo. of 1st driver \n");
    scanf("%s",&d3.dlNo);

    printf("Enter the route of 1st driver \n");
    scanf("%s",&d3.route);
    
    printf("Enter the km of 1st driver \n");
    scanf("%d",&d3.kms);


    return 0;
}