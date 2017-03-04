#include<stdio.h>
int main(){
	int n,m,i;
	scanf("%d",&n);
	int a[101];
	for(i=0;i<101;i++)
	a[i]=0;
	while(n--){
		scanf("%d",&m);
		a[m]=a[m]+1;
	}
	int c=0;
	for(i=0;i<101;i++){
		if(a[i]==1){
			printf("%d\n",i);
			c++;
		}
	}
	if(c==0)
	printf("0");
    return 0;
}
