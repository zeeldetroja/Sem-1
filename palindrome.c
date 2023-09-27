#include<stdio.h>
void main(){
	int n,i,a;
	printf("enter number=");
	scanf("%d",&n);
	n=a;
	while(n>0){
		i=n%10;
		printf("%d",i);
		n=n/10;
	}
	if(a==n){
		printf("\nnumber is palindrome");
	}
	else{
		printf("\nnumber is not palindrome");
	}
	
}
