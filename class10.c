#include<stdio.h>
#include<conio.h>

int main(){

    char day;
    printf("Enter a first letter of day to print the day.");
    scanf("%c", &day);
    switch (day)
    {
    case 'M': 
            printf("Monday");
        break;
    case 'T':
            printf("Tuesday");
            break;
    
    
    default:
    printf("day other than Monday and Tuesday");
        break;
    }



    
    



return 0;

}