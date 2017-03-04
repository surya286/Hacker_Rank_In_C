#include<stdio.h>
int reverse(long int n);
int main(){
	long int i,j,k,n,m,c=0;
	scanf("%ld%ld%ld",&n,&m,&k);
	for(i=n;i<=m;i++){
		long int rev_num=reverse(i);
		long int diff=i-rev_num;
		if(diff<0){
			diff=diff*(-1);
		}
		if(diff%k==0){
			c++;
		}
	}
	printf("%ld",c);
    return 0;
}
int reverse(long int n){
	long int t=0;
	while(n!=0){
		int r=n%10;
		t=t*10+r;
		n=n/10;
	}
	return t;
}
