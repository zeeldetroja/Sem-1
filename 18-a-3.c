#include<stdio.h>
int si(int p,int n,int r){
	int x=(p*n*r)/100;
	return x;
}
void main(){
	int p,n,r;
	printf("enter p=");
	scanf("%d",&p);
	printf("enter r=");
	scanf("%d",&r);
	printf("enter n=");
	scanf("%d",&n);
	int interest=si(p,n,r);
	printf("interest=%d",interest);
}
