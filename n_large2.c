#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 1st no.: %d");
	scanf("%d",&a);
	Printf("Enter 2nd no.: %d");
	scanf("%d",&b);
	printf("Enter 3rd no.: %d");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("The largest no. is: %d", a);
		if (b>c && b>a)
		{
			printf("The largest no. is: %d",b);
		}
		else 
		{
			Printf("the largest no is: %d", c);
		}
	}
}

