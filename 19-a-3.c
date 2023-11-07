#include<stdio.h>
#include<string.h>
void main(){
	char a[1000],b[1000];
	printf("enter string s1=");
	gets(a);
	printf("enter string s2=");
	gets(b);
	
	int c=strlen(a),d=strlen(b);
	printf("s1 length=%d s2 length=%d\n",c,d);
	int j;
	printf("enter number of char for comparision=");
	scanf("%d",&j);
	printf("%d",strcmp(a,b,j));
	
	int f[1000];
	strcpy(a,f);
	printf("%s",f[1000]);
	
}
