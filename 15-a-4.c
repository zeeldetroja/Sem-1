#include<stdio.h>
int main(){
	int i,n,j;
	printf("enter number of element=");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("enter element of a[i]:");
		scanf("%d",&a[i]);
	}
	printf("enter element for search=");
	scanf("%d",&j);
	
	for(i=0;i<n;i++){
		if(a[i]==j){
			printf("enter element is in array");
		}
		else{
			printf("enter element not found in array");
		}
		break;
	}
}
