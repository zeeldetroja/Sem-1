#include<stdio.h>
void main(){
	char i=65;
	
	
	while(i>64 && i<122){
		printf("%c ",i);
		i++;
		if(i==91){
			i=97;
		}
	}

	
}
