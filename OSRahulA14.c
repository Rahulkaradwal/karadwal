#include<stdio.h>
 
int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,a[10],base=60,st[10];
    int totwt=0,totta=0,ft[19];
    float awt,ata;

   	printf("**********************************************TRADITIONAL UNIX SCHEDULER*******************************************\n\n\n");

    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time and arrival time:\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        printf("Arrival Time:");
        scanf("%d",&a[i]);
        p[i]=i+1;           //contains process number
    }
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t VALUES THAT YOU HAVE ENTERED\n");
     printf("\n");
 	printf("Process Number\t\t\t\tBurst Time\t\t\tArrival Time\n");
	for(i=0;i<n;i++){
	printf("    P[%d]\t\t\t\t   %d\t\t\t\t     %d\t\t\t\t\n",p[i],bt[i],a[i]);
	}
}

