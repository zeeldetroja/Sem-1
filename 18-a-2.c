// find maximum and minimum between two numbers using function.
#include<stdio.h>
int max(int x,int y){
	int max;
	if(x>y){
		max=x;
	
	}
	else{
		max=y;
	
	}
		return max;

}
int min(int x,int y){
	int min;
	if(x<y){
		min=x;
		
	}
	else{
		min=y;
	
	}
	return min;
	
}
void main(){
	int a,b;
	printf("enter number a=");
	scanf("%d",&a);
	printf("entee number b=");
	scanf("%d",&b);
	int c=max(a,b);
	int d=min(a,b);
	printf("max=%d\n",c);
	printf("min=%d",d);
	
}
