#include<stdio.h>
void main()
{
	int sec,hr,min;
	printf("Enter any integer in seconds :");
	scanf("%d",&sec);
	hr=sec/120;
	printf("Value in hours is : %d",hr);
	min=sec/60;
	pritnf("Value in minutes is : %d",min);
	pritnf("%d:%d:%d",hr,min,sec);
}
