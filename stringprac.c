#include<stdio.h>
#include<string.h>
int main(){

char s1[54];
char s2[54];
char s3[54];
printf("Enter the name of first person\n");
gets(s1);
printf("Enter the name of 2nd person\n");
gets(s2);
printf("%s is the friend of %s\n",s1,s2);
puts(strcat(s1,s2));


return 0;
}