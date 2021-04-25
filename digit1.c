#include<stdio.h>
void main()
{
	int n,n2,i=0,sum=0,a;
	printf("Enter the  five digits positive number: ");
	scanf("%d",&n);
	n2=n;
	while(n>0)
	{
		n=n/10;
		i++;
	}	
	if(i==5)
	{
		while(n2>0)
		{
			a=n2%10;
			sum=sum+a;
			n2=n2/10;
		}
		printf("sum of the digits = %d\n",sum);
	}			
        else
	{
    		printf("INVALID NUMBER: ");
	}
}
		
		
	

	

		

	

    
    



    
	
	
       
    
 
    

