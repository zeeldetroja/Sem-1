#include<stdio.h>

void abcd(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
void main(){
	int n,i=0;
	printf("enter number of element=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	abcd(a,n);
}

