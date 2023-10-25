#include<stdio.h>
void main(){
	int row,column,i,j;
	printf("enter num of row=");
	scanf("%d",&row);
	printf("enter num of column=");
	scanf("%d",&column);
	int a[row][column],b[row][column],c[row][column];
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("c[%d][%d]=%d\t",i,j,c[i][j]);
		}
		printf("\n");
	}
	
}
