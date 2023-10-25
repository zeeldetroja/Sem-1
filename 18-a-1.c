#include<stdio.h>
int  sum(int x,int y){
	int ans=x+y;
	return ans;
}
void main(){
	int a,b;
	printf("enter number a=");
	scanf("%d",&a);
	printf("enter number b=");
	scanf("%d",&b);
	int ans=sum(a,b);
	printf("addition is=%d",ans);
}

