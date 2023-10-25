#include<stdio.h>
void main(){
	int i,j,n,m;
	printf("enter number of row=");
	scanf("%d",&n);
	printf("enter number of column");
	scanf("%d",&m);
	int a[n][m];
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
			printf("\n");
	}
}
