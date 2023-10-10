#include<stdio.h>
void main(){
	int i,j,n=10;
	float val=1,div=1;
	for(i=1;i<=n;i++){
		div=1;
		for(j=1;j<=i;j++){
			div=div*j;
			
		}
		val=val+(1.0/div);
		
	}
	printf("e=%f",val);
}
