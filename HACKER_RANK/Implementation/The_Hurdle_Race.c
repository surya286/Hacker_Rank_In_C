#include<stdio.h>
int main(){
	int n,k,t,max=0;
	scanf("%d%d",&n,&k);
	while(n--){
		scanf("%d",&t);
		if(t>max)
		max=t;
	}
	if(max>k)
	printf("%d",max-k);
	else
	printf("0");
	return 0;
}
