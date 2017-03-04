#include<stdio.h>
#include<string.h>
int main(){
	char s[100000];
	long int i,c;
	scanf("%s",s);
	if(s[0]>=65 && s[0]<=90)
	c=0;
	else
	c=1;
	for(i=0;i<strlen(s);i++){
		if(s[i]>=65 && s[i]<=90)
		c++;
	}
	printf("%ld",c);
}
