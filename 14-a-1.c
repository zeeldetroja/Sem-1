
#include<stdio.h>
void main(){
	int i,n;
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
		printf("%d,",arr[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--){
		printf("%d,",arr[i]);
	}
}
