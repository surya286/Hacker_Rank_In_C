#include<stdio.h>
#include<string.h>
int main(){
	int max=-9999,a[200],i,j;
	for(i=97;i<=122;i++){
		scanf("%d",&a[i]);
	}
	char s[11];
	scanf("%s",s);
    int l=strlen(s);
	for(i=0;i<strlen(s);i++){
		int t = s[i];
		if(a[t]>max)
		max=a[t];
	}
	printf("%d",max*l);
}
