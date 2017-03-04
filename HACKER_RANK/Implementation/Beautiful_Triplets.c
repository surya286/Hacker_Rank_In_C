#include<stdio.h>
int main(){
	int n,d,c=0,i,j,k;
	scanf("%d%d",&n,&d);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			int t=a[i]-a[j];
			if(t<0)
			t=t*(-1);
			if(t==d){
				for(k=j;k<n;k++){
					int r=a[j]-a[k];
					if(r<0)
					r=r*(-1);
					if(r==d){
						c++;
						break;
					}
				}	
			}
		}
	}
	printf("%d",c);
}
