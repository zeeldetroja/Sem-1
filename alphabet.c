#include<stdio.h>
void main(){
	
	char alphabet;
	printf("enter alphabet=");
	scanf("%c",&alphabet);
	if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'  ){
		printf("%c is vowel",alphabet);
	}
	else{
		printf("%c is consonant",alphabet);
	}
	
	
	

}
