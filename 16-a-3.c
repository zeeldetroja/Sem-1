#include<stdio.h>
void main(){
	int i,j,marks;
	int a[20][2];
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			printf("enter marks=");
			scanf("%d",&a[i][j]);
		}
	}
	j=0;
	for(i=0;i<20;i++){
		
			printf("roll no.[%d]=mark[%d]",i,a[i][j]);
			j++;
			printf("\n");
	}
}
