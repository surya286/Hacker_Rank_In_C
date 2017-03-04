#include<stdio.h>
int main(){
	int n,i,c=2,sum=2;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		c=(c*3)/2;
		sum=sum+c;
	}
	printf("%d",sum);
	return 0;
}
