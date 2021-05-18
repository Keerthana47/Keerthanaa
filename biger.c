#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2;
	printf("Enter the two numbers");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	{
		printf("n1 is the bigest nummber=%d\n",n1);
	}
	else if(n2>n1)
	{
		printf("n2 is the bigest number=%d\n",n2);
	}
	else
	{
		printf("the two numbers are equal");
	}
}	
