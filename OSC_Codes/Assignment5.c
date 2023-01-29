#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
void ascending(int a[], int n);
void descending(int a[],int n);
int main()
{
    int n;
    printf("Enter The Number of Elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter The Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    pid_t pid;
    pid = fork();
    if(pid==-1)
    {
        printf("Process Could Not Be Created");
        exit;
    }
    if(pid==0)
    {
        printf("\nChild Process Running");
        ascending(a,n);
        printf("\nAscending Elements Sorted Array is:");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    else
    {
        printf("\nParent Process Running");
        descending(a,n);
        printf("\nDescending Elements Sorted Array is:");
        for(int i=1;i<n+1;i++)
        {
            printf("%d\t",a[i]);
        }
        
    }
}

void ascending(int a[], int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void descending(int a[], int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j+1]>a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
