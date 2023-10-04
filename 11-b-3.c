#include<stdio.h>
void main(){
	int b=64,i,alphabet[64];
	char c='A';
	for(i=0;i<=64;i++){
		c++;
		b++;
		if(b==91){
			b=97;
		}
		printf("alphabet[%c]=%d\n",c,b);
	}
}
