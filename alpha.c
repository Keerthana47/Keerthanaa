#include<stdio.h>
#include<math.h>
int main()
{
	char a;
	printf("Enter the key");
	scanf("%c",&a);
	if(a>=65 && a<90)	
	{
		printf("An uppercase letter");
	}
	else if(a>=97 && a<=122)
	{
		printf("An lowercase letter");
	
	}
	else if(a>=48 && a<=57)
	{
		printf("A digit");
	}
	else
	{
		printf("A special symbol\n\n");
	}
}
		
