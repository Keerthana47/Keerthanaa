#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the marks o to 100");
    scanf("%d",&mark);
    switch(mark/10)
    {
	case 10:
	
	case 9:
		printf("your grades is A\n");
		break;
	case 8:
		printf("your grades is B\n");
		break;
	case 7:
		printf("your grades is C\n");
		break;
	case 6:
		printf("your grades is D\n");
		break;
	case 5:
		printf("your grades is F\n");
		break;
	case 4:
		printf("Your grades is E\n");
		break;
	default:
		printf("invalid\n");
		
  }
}
