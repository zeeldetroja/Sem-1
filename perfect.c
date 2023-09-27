#include<stdio.h>
void main(){
	int n,sum=0,i=1;
	printf("enter number=");
	scanf("%d",&n);
	while(i<=n-1){
		if(n%i==0){
			printf("%d\n",i);
			sum=sum+i;
			i++;
		}
		else{
			i++;
		}
		
	}
	if(sum==n){
		printf("number is perfect");
		
	}
	else{
		printf("number is not perfect");
	}
	
}
