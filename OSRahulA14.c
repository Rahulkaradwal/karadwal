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
        p[i]=i+1;
        printf("Initially Priority ");
		scanf("%d",&pr[i]);           
    }
    
    for(k=0;k<n;k++)
    {
    	a[k]=0;
	}
    for(j=0;j<b1;j++)
    {
    a: for(i=0;i<n;i++)
     {
     	if(pr[i]<big)
     	{
     		big=pr[i];
     		l=i;
     		if(bt[l]==0)
     		{
     		 pr[l]=10;
			  goto a;	
			}
		}
	   
	 }
	 bt[l]=bt[l]-1;
	 a[l]=a[l]+1;
	 for(i=0;i<n;i++)
	 {
	 	if(i!=big)
	 	{
	 	 wt[i]=wt[i]+1;	
		}
	 }
	 for(i=0;i<n;i++)
	 {
	 	pr[i]=(a[i]/2)+60;	 
	 }
   }
	 
}

}
