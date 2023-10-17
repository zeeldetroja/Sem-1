#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,count=0;
	
	
	char a[100];
	
	printf("enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	printf("lenght of string=%d\n",count);
	
//	for(i=0;i<100;i++){
//		printf("%s",);
//	}
	return 0;
}
