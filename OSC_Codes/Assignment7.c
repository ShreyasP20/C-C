#include<stdio.h>
#include<pthread.h>
void *add(void *argp);
int main()
{
    pthread_t tid[5];
    int sum=0,n,i, a[]={1,2,3,4,5};
    for(i=0;i<n;i++)
    {
        pthread_create(&tid[i],NULL,add,&a[i]);
        pthread_join(tid[i],(void *) &n);
        sum=sum+n;
    }
    printf("sum=%d\n",sum);
    return 0;
}
void *add(void *argp)
{
    int ele =(int *)argp;
    ele=ele+1;
    return(void *) ele;
}