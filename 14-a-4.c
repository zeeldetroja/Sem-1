#include<stdio.h>
void main(){
	int i,n,a,b,min,max,sum=0,odd=0,even=0;
	int avg;
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
	for(i=1;i<n;i++){
		if(arr[i]>arr[0]){
			a=arr[i];
		}
	}
	max=a;
	printf("max=%d",max);
	printf("\n");
	for(i=1;i<n;i++){
		if(arr[i]<arr[0]){
			b=arr[i];
		}
		else{
		    b=arr[0];
		}
	}
	min=b;
	printf("min=%d",min);
	printf("\n");
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum=%d",sum);
	printf("\n");
	
	avg=sum/n;
	printf("avg=%d",avg);	
}
