#include <stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long int i,n,start=0,m,c=0;
		scanf("%ld%ld",&n,&m);
		for(i=n;i<=m;i++){
			float f=sqrt(i);
			int t=sqrt(i);
			if(f==t){
				start=f;
				break;
			}
		}
		if(start!=0){
			for(start;(start*start)<=m;start++)
			c++;
		}
		printf("%ld\n",c);
	}
}
