#include<stdio.h>
int main()
{
    int bt[20],k,p[20],pr[20],wt[20],tat[20],i,j,n,total=0,pos,temp,base=60,start[10],b1=0,big=4,l,num[100],ar[100];
    int totwait=0,totturn=0,final[19],a[10];
    float avgwt,avgta;
	printf("\n");
   	printf("**********************************************TRADITIONAL UNIX SCHEDULER*******************************************\n\n\n");

    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time and arrival time\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        num[i]=bt[i];
        b1=b1+bt[i];		//total time
        printf("Arrival Time:");
        scanf("%d",&a[i]);
        ar[i]=a[i];
        printf("Initially Priority ");
		scanf("%d",&pr[i]);     
		printf("\n");     
		p[i]=i+1; 
    }

	
    
    for(k=0;k<n;k++)  //Here we are calculating cpu ussage
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
		if(bt[l]==0)
		{
			bt[l]=0;
		}
		for(k=0;k<n;k++)
		{
			pr[k]=(a[k]/2)*base;
		}
        
	}
	printf("Recalculated Priority of Process\n");
	for(i=0;i<n;i++)
	{
		printf("P[%d]: %d\n",i+1,pr[i]);
	}
    
    
  	printf("\t\t\t\t VALUES AFTER RECALCULATEING THE NEW PRIORITIES");
  	 printf("\n");
  	 fflush(stdin);
    printf("\n\n\nProcess Number\t\t\t\tBurst Time\t\t\tArrival Time\t\t\tPriority\n");
	for(i=0;i<n;i++){
	printf("    P[%d]\t\t\t\t    %d\t\t\t\t     %d\t\t\t\t    %d\n",i+1,num[i],ar[i],pr[i]);
	}
	// yha tak
	
	for(i=0; i<n; i++)				// Sorting the process according to the Priority
        for(j=0; j<n; j++)
        {
            if(pr[i]<pr[j])
            {
                temp=pr[i];
                pr[i]=pr[j];
                pr[j]=temp;
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
        for(i=0; i<n; i++)
 
    {
 
        if(i==0)
        {
            start[i]=ar[i];
            wt[i]=start[i]-ar[i];
            final[i]=start[i]+num[i];
            tat[i]=final[i]-ar[i];
        }
        else
        {
            start[i]=final[i-1];
            wt[i]=start[i]-ar[i];
            final[i]=start[i]+num[i];
            tat[i]=final[i]-ar[i];
        }
        totwait+=wt[i];
        totturn+=tat[i];
    }
     avgwt=(float)totwait/n;
    avgta=(float)totturn/n;
     printf("\n");
      printf("\n");
      printf("\t\t VALUES AFTER CALCULATING THE WAITING TIME AND TURNAROUND TIME ");
       printf("\n");
        printf("\n");
    printf("\nProcess\tArrival time\tBurst time\tPriority\tWaiting time\tTurnaround time");
    for(i=0; i<n; i++)
    {
    if(wt[i]<0)
    {
    	wt[i]=wt[i]*-1;
	}
	if(tat[i]<0)
	{
		tat[i]=tat[i]*-1;
	}
        printf("\nP[%d]\t%5d\t\t%5d\t\t%5d\t\t%5d\t\t%5d",p[i],ar[i],num[i],pr[i],wt[i],tat[i]);
         printf("\n");
         
    }
    
    printf("\n\t\t Average Waiting time :%f",avgwt);
    printf("\t\t Average Turnaround time :%f",avgta);
    
	getch();
	
return 0;
}
