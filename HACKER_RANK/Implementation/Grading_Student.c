#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
	scanf("%d",&n);
	if(n>=38){
		int r=n%5;
		int t=5-r;
		if(t<3)
		printf("%d\n",n+t);
		else
		printf("%d\n",n);
	}
	else
	printf("%d\n",n);
	}
	return 0;
}
