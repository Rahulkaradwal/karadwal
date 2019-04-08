#include<stdio.h>
int main()
{
    int bt[20],k,p[20],pr[20],wt[20],tat[20],i,j,n,total=0,pos,temp,base=60,st[10],b1,big=4,l;
    int totwt=0,totta=0,ft[19];
    float awt,ata,a[10];

   	printf("**********************************************TRADITIONAL UNIX SCHEDULER*******************************************\n\n\n");

    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time and arrival time\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        b1=b1+bt[i];
        printf("Arrival Time:");
        scanf("%d",&a[i]);
   	printf("Initially Priority ");
		scanf("%d",&pr[i]);           
    }
    
    for(k=0;k<n;k++)
    {
    	a[k]=0;
    }
    for(i=0;i<b1;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(pr[j]<big&&bt[j]>=0)
    		{
    		
    			big=pr[j];
    			l=j;
			}
		}
		a[l]=a[l]+1;
		bt[l]=bt[l]-1;
		for(k=0;k<n;k++)
		{
			pr[k]=(a[k]/2)*60;
		}
        
	}
	for(i=0;i<n;i++)
	{
		printf("Recalculated Priority of Process %d: %d\n",i+1,pr[i]);
	}

}
