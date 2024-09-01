/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs

*/
#include<stdio.h>

double KmsToMiles(double value)
{
    double result;
    result = value * 0.621;
    return result;
}

double InchesToFoot(double value)
{
    double result;
    result = value * 0.0833;
    return result;
}

double CmsToInches(double value)
{
    double result;
    result = value * 0.394;
    return result;
}

int main()
{
    float value;
    int a;
    printf("Welocome to conversion programe\n");
    printf("Enter the value you want to do converstion.\n");
    scanf("%f",&value);
    printf(" Enter your choice.\n"
               " 1> Kms to Miles\n"
               " 2> Inches to foot\n"
                "3> Cms to Inches\n"
                "4> Enter any other number exit the program\n");
    scanf("%d", &a);
    
    if(a== 1){
        printf("Your conversiton value of %f kms = %f miles.\n",value,KmsToMiles(value));
    }else if(a == 2){
        printf("Your conversiton value of %f inches = %f foot.\n",value,InchesToFoot(value));
    }else if (a ==3)
    {
       printf("Your conversiton value of %f cms = %f inches.\n",value,CmsToInches(value)); 
    }else if (a==4)
    {
        printf("Exiting the program.\n");
        goto exit;
    }else{
        printf("Enter the invalide option . Exiting the program....");
        goto exit;
    }
    
    

   
    
    exit:
    return 0;

}

