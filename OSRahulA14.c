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

	
    
    for(k=0;k<n;k++)  //cPu ussage
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
		if(bt[l]=0)
		{
			bt[l]==0;
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
    
    
    
      //sorting burst time, priority and process number in ascending order using selection sort
    
	for(i=0;i<n;i++)
    {
        pos=i;
        for(j=0;j<n;j++)
        {
            if(pr[j]<pr[pos])
            {
			
                pos=j;
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
        
         temp=ar[i];
        ar[i]=ar[pos];
        ar[pos]=temp;
        pos++;
    }
    }
    }  	
  
  
  	printf("\t\t\t\t VALUES AFTER RECALCULATEING THE NEW PRIORITIES");
  	 printf("\n");
  	 fflush(stdin);
    printf("\n\n\nProcess Number\t\t\t\tBurst Time\t\t\tArrival Time\t\t\tPriority\n");
	for(i=0;i<n;i++){
	printf("    P[%d]\t\t\t\t    %d\t\t\t\t     %d\t\t\t\t    %d\n",i+1,num[i],ar[i],pr[i]);
	}
