#include<stdio.h>
#define size 10001
int main(){
	long int n,m;
	scanf("%ld",&n);
	int a[size],i,element;
	for(i=0;i<size;i++){
		a[i]=0;
	}
	while(n--){
		scanf("%d",&element);
		a[element]--;
	}
	scanf("%ld",&m);
	while(m--){
		scanf("%d",&element);
		a[element]++;
	}
	for(i=0;i<size;i++){
		if(a[i]!=0)
		printf("%d ",i);
	}
    return 0;
}
