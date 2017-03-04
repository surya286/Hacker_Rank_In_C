#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,s;
		scanf("%d%d%d",&n,&m,&s);
		printf("%d\n",(m-1+s-1)%n+1);
	}
}
