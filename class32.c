#include <stdio.h>
int func(int arr[])
{
    int sum = 0, s = 0;
    for (int i = 0; i < 3; i++)
    {
        s++;
        sum = sum + arr[i];
    }
    return sum / s;
}

void func2(int *ptr){
   for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr+i));
    }
    *(ptr + 2) = 6534;

}

void func3(int arr[2][2]){
    for(int i=0; i<2; i++){
        for(int j =0; j<2; j++){
            printf("the value at %d , %d = %d\n",i,j,arr[i][j]);
        }
    }
}
int main()
{
    int arr[][2] ={{2, 4},{5,6}};
    //int avg = func(arr);
   // printf("The avg is = %d", avg);
   //func2(arr);
  // func2(arr);
  func3(arr);

    return 0;
}