#include<stdio.h>
void main(){
	int a,b,choice;
	
	printf("1=addition ,2=subtration,3=multiplication,4=divition\n");
	printf("enter choice=");
	scanf("%d",&choice);
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	switch(choice){
		case 1:
			printf("add=%d",a+b);
			break;
			case 2:
			printf("sub=%d",a-b);
			break;
			case 3:
			printf("mul=%d",a*b);
			break;
			case 4:
			printf("div=%d",a/b);
			break;
			default:printf("enter valid choice");
			break;
				
			}
	}
