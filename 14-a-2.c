#include<stdio.h>
void main(){
	int i,n,pos=0,neg=0;
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
		if(arr[i]>=0){
			pos++;
		}
		else{
			neg++;
		}
	}
	printf("pos=%d",pos);
	printf("\n");
	printf("neg=%d",neg);
	
	
}
