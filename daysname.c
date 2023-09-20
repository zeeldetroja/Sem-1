#include<stdio.h>
void main(){
	int n;
	printf("enter month's number =");
	scanf("%d",&n);
	if(n>=1 && n<=12){
		switch(n){
			case 2:printf("28 days");
			break;
			case 4:printf("30 days");
			break;
			case 6:printf("30 days");
			break;
			case 10:printf("30 days");
			break;
			case 12:printf("30 days");
			break;
			default:printf("31 days");
			break;
		}
	}
			else{
			printf("enter valid number");
		
	}
}
