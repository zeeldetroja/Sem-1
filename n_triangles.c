#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,h,A;
	printf("Enter the h,b,a,c: ");
	scanf("%f %f %f",&a,&b,&h,&c);
	if(a==b==c)
	{
	printf("It's an equilateral triangle",A);
}
if(a==b && a!=b && c!=b)
{
	printf("It's an iso triangle",A);	
}
if(a!=b!=c)
{
	printf("It's is scalene triangle",A);
}
if(a<b && c<b)
{
	printf("it's right angle traingle",A);
}
else 
{
	printf("Other",A);
}
}
