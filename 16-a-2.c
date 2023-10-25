#include<stdio.h>
void main(){
	int i,j,pos=0,neg=0,zero=0;
	int a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>0){
				pos++;
			}
			else if(a[i][j]<0){
				neg++;
			}
			else if(a[i][j]==0){
				zero++;
			}
		}
	}
	printf("positive num=%d",pos);
	printf("negative num=%d",neg);
	printf("num of zero=%d",zero);
}
