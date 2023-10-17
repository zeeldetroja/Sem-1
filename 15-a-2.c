#include<stdio.h>
int main(){
	int i,n,j,neg=0;
	printf("enter number of element=");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("enter element of a[i]:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			neg++;
		}
	}
	printf("numbre of negetive element=%d",neg);
}
