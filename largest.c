#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter value for a : ");
	scanf("%d",&a);
	printf("Enter value for b : ");
	scanf("%d",&b);	
	printf("Enter value for c : ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is largest",a);
		}
		else
		{
			printf("%d is largest",c);
		}
	}
	else if(b>c)
	{
		printf("%d is largest,b");
	}
	else
	{
		printf("%d is largest",c);
	}
}
