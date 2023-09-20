#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r,x,y;
 	scanf("%f %f %f",&a,&b,&c);
 	d=(b*b)-4*a*c;
 	x=(-b+sqrt(d)/2*a);
 	y=(-b-sqrt(d)/2*a); 
 	if(a==0)
	{
	 	r=-b/c;
		 printf(" roots are %.2f: ",r);	
	}
	if (d<0)
	{
		printf("Roots are netural");
	}
	else
	{
		printf("roots are %.2f , %.2f",x,y);
	}
}
