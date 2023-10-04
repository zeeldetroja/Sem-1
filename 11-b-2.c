#include<stdio.h>
void main(){
	int n,i,a,b,d,count[10];

	printf("enter num=");
	scanf("%d",&n);
	for(b=0;b<=10;b++){
		count[b]=0;
	}
	
	for(i=0;n>0;i++){
		a=n%10;
		if(a==0){
			count[0]++;
		}
		else if(a==1){
			count[1]++;
		}
		else if(a==2){
			count[2]++;
		}
		else if(a==3){
			count[3]++;
		}
		else if(a==4){
			count[4]++;
		}
		else if(a==5){
			count[5]++;
		}
		else if(a==6){
			count[6]++;
		}
		else if(a==7){
			count[7]++;
		}
		else if(a==8){
			count[8]++;
		}
		else if(a==9){
			count[9]++;
		}
		n=n/10;
	}
	for(d=0;d<=10;d++){
		printf("count[%d]=%d\n",d,count[d]);
	}
}
