#include<stdio.h>
int main(){
	int i,n,j,count=0;
	printf("enter number of element=");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("enter element of a[i]:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%3==0){
			count++;
		}
	}
	printf("number of element divisible by 3=%d",count);
}
