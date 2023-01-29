#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Number Of Processes:");
    scanf("%d",&n);
    int bt[n], at[n], st[n], wt[n];
    float twt=0, avg_twt=0;
    st[0]=0;
    wt[0]=0;
    for(int i=0;i<n;i++)
    {
        printf("\nEnter Burst Time For Process[%d]:",i);
        scanf("%d",&bt[i]);
        printf("\nEnter Arrival Time For Process[%d]:",i);
        scanf("%d",&at[i]);
    }
    for(int j=1;j<n;j++)
    {
        st[j]=st[j-1]+bt[j-1];
        wt[j]=st[j]-at[j];
    }
    printf("Processes \tBurst Time \tArrival Time \tService Time \tWait Time");
    for(int i=0;i<n;i++)
    {
        printf("\nP[%d] \t\t%d \t\t%d \t\t%d \t\t%d",i,bt[i],at[i],st[i],wt[i]);
        twt=twt + wt[i];
    }
    avg_twt=twt/n;
    printf("\nAverage Wait Time:%f",avg_twt);
}