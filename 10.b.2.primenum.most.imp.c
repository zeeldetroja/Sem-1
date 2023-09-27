#include<stdio.h>
void main(){
	int flag=0,n,i;
	printf("enter number =");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("number is not prime");
	}
	else{
		printf("number is prime");
	}
}
