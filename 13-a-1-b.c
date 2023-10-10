#include<stdio.h>
void main(){
	int i,j,a=1;
	for(i=5;i>0;i--){
		for(j=1;j<=i;j++){
			printf("%d",a++);
		}
		a=1;
		printf("\n");
	}
	
}
