#include<stdio.h>
void main(){
	int i,n,odd=0,even=0;
	printf("enter number for arr's element=");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter num:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("odd=%d",odd);
	printf("\n");
	printf("even=%d",even);
	
	
}
