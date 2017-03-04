#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,c,m;
		scanf("%d%d%d",&n,&c,&m);
		int ans=n/c;
		int temp=ans;
		while(temp>=m){
			int t=temp/m;
			int r=temp%m;
			ans=ans+t;
			temp=t+r;
		}
		printf("%d\n",ans);
	}
	return 0;
}
