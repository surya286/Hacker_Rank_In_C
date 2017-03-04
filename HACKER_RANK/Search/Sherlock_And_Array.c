#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long int n;
	scanf("%ld",&n);
	long int a[n],left_sum[n],right_sum[n],i,sum=0;
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
		sum=sum+a[i];
		left_sum[i]=sum;
    }
	sum=0;
	for(i=n-1;i>=0;i--){
		sum=sum+a[i];
		right_sum[i]=sum;
	}
	int c=0;
	for(i=1;i<n-1;i++){
		if(left_sum[i-1]==right_sum[i+1]){
			c++;
			break;
		}
	}
	if(c==1 || n==1)
	printf("YES\n");
	else
	printf("NO\n");	
	}
}
