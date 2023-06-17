#include<stdio.h>
int array1(int num);
int main()
{
int a,arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        array1(arr[i]);
    }
}

int array1(int num)
{
    printf("%d",num);
}