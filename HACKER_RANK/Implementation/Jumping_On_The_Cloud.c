#include<stdio.h>
int main(){
	int n,i,c=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	for(i=0;i<n-1;){
		if(( a[i+1]==0  || a[i+1]==1 )&& a[i+2]==0){
			i=i+2;
			c++;
		}
		else if(a[i+1]==0 && a[i+2]==1){
			i=i+1;
			c++;
		}
		if(i==n-2)
		break;
	}
	if(i==n-2)
	printf("%d",c+1);
	else
	printf("%d",c);
	return 0;
}
