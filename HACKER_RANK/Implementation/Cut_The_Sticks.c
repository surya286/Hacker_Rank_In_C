#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0
		;j<n;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]!=0){
			int t=a[i],c=0;
		for(j=0;j<n;j++){
			if(a[j]!=0){
				a[j]=a[j]-t;
				c++;
			}
		}
		printf("%d\n",c);
		}
	}
}
