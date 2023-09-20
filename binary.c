#include<stdio.h>
void main(){
	int n,a,b,c=0;
	printf("enter number =");
	scanf("%d",&n);
	while(n>0){
		b=n%10;
		c=c*10+b;
		n=n/10;
}
	while(c>0){
		a=c%10;
		if(a%2!=0){
			printf("1");
		}
		else if(a%2==0){
			printf("0");
		}
		c=c/10;
		
		
	}
}
