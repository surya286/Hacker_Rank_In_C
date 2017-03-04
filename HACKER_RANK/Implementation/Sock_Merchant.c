#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,a[101],tot=0;
	for(i=0;i<=100;i++)
	a[i]=0;
	for(i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		a[t]++;
	}
	for(i=0;i<101;i++){
		tot=tot+a[i]/2;
	}
	printf("%d",tot);
    return 0;
}
