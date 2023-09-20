#include<stdio.h>
void main(){
	int n,a,b,c=0;
	printf("enter number =");
	scanf("%d",&n);
	while(n>0){
		b=n%10;
		c=c*10+b;
		n=n/10;
	}
	while(c>0){
		a=c%10;
	
		
		if(a==0){
			printf(" zero");
		}
		else if(a==1){
			printf(" one");
		}
		else if(a==2){
			printf(" two");
		}
		else if(a==3){
			printf(" three");
			}
			else if(a==4){
				printf(" four");
			}
			else if(a==5){
				printf(" five");
			}
			else if(a==6){
				printf(" six");
			}
			else if(a==7){
				printf(" seven");
			}
			else if(a==8){
				printf(" eight");
			}
			else if(a==9){
				printf(" nine");
		}
		c=c/10;
	
		
	}
}
