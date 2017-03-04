#include<stdio.h>
int main(){
	unsigned int n,k,b,i,sum=0;
	scanf("%u%u",&n,&k);
	unsigned int a[n];
	for(i=0;i<n;i++){
		scanf("%u",&a[i]);
		sum=sum+a[i];
	}
	scanf("%u",&b);
	sum=sum-a[k];
	sum=sum/2;
	if(b>sum)
	printf("%u",b-sum);
	else
	printf("Bon Appetit");
}
