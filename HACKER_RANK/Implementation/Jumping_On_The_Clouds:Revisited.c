#include<stdio.h>
int main(){
	int n,k,i,energy=100;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=k;i<n;i=i+k){
		if(a[i]==1)
		energy=energy-2;
		energy--;
	}
	if(n==k){
		if(a[n-1]==1)
		printf("%d",energy-3);
		else
		printf("%d",energy-1);
	}
	else{
		if(a[0]==0)
		printf("%d",energy-1);
		else
		printf("%d",energy-3);
	}
	return 0;
}
