#include<stdio.h>
void main(){
	 int a,b,c;
	 printf("enter a=");
	 scanf("%d",&a);
	 printf("enter b=");
	 scanf("%d",&b);
	 printf("enter c=");
	 scanf("%d",&c);
	 
	 (a>b)?((a>c)?printf("max=a"):printf("max=c")):((b>c)?printf("max=b"):printf("max=c"));
	 
	 
	 
}
