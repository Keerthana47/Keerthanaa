#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter amount\n");
	scanf("%d",&a);
	b=a/100;
	c=a%100;
	b=b+c/50;
	c=c%50;
	b=b+c/10;
	c=c%10;
	b=b+c/2;
	c=c%2;
	b=b+c/1;
	printf("\n number of notes is: %d",b);
}
	    
	

    
