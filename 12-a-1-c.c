#include<stdio.h>
void main(){
	int i,j,a=5;
	for(i=0;i<=4;i++){
		for(j=0;j<=i;j++){
			printf("%d",a--);
		}
		printf("\n");
		a=5;
	}
}
