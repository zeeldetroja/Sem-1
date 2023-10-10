#include<stdio.h>
void main(){
	int j,i,n,a=1,sum1=0,sum2=0,sum=0;
	printf("enter number=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			sum1=sum1+j;
		}
		sum2=sum2+i;
	}
	sum=sum1+sum2;
	printf("%d",sum);
	
}
