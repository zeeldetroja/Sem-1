#include<stdio.h>
int  main(){
	int i,n,j;
	printf("enter number of element=");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(i=0;i<n;i++){
		printf("enter element of a[i]:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		b[i]=a[i];
	}

	for(j=0;j<n;j++){
		printf("b[%d]=%d\n",j,b[j]);
	}
	return 0;
}
