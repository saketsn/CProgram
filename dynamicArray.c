#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertArr(int *arr, int r)
{
int i;
for(i = 0; i < r; i++)
{
    printf("Index[%d]: ",i);
    scanf("%d",&arr[i]);
}
}

void enterEleAgain(int *arr, int prer, int newr)
{
	int i;
	for(i = prer; i < newr; i++)
	{
		printf("Index[%d]",i);
		scanf("%d", &arr[i]);
	}
}

void printArr(int *arr, int r)
{
int i;
printf("\nYour Array is: \n");
for(i = 0; i < r; i++)
{
printf("%d\t",arr[i]);
}
}

void freeArr(int *arr)
{
free(arr);
arr = NULL;
printf("\nArray Deallocated");
}

void main()
{
int r,i,*arr;
int newr;

printf("Entre Range: ");
scanf("%d",&r);
arr = (int *)malloc(r*sizeof(int));
insertArr(arr, r);
printArr(arr, r);
printf("\n");
printf("Enter new Range:");
scanf("%d",&newr);
arr = (int *)realloc(arr,newr*sizeof(int));
enterEleAgain(arr,r,
newr);
printArr(arr, newr);
freeArr(arr);
getch();
}