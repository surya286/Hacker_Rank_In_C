#include<stdio.h>
#include<string.h>
int main(){
	char s[1001];
	int i,j,c=0;
	scanf("%[^\n]",s);
	int a[200];
	for(i=0;i<200;i++)
	a[i]=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]>=65 && s[i]<=90)
		a[s[i]]++;
		else if(s[i]>=97 && s[i]<=122)
		a[s[i]]++;
	}
	for(i=65,j=97;i<=90&&j<=122;i++,j++){
		if(a[i]>0 || a[j]>0)
		c++;
	}
	if(c==26)
	printf("pangram");
	else
	printf("not pangram");
	return 0;
}
