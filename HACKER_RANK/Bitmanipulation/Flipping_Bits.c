#include<stdio.h>
int main(){
	int t;
    unsigned int max=4294967295;
	scanf("%d",&t);
	while(t--){
		unsigned int n;
		scanf("%u",&n);
		printf("%u\n",max-n);
	}
}
