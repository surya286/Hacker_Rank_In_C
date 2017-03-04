#include<stdio.h>
#include<string.h>
int main(){
	int i,n,m,ans=0,k,j;
	scanf("%d%d",&n,&m);
	char s[n][m];
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	int max=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			int c=0;
			for(k=0;k<m;k++){
				if(s[i][k]=='1' || s[j][k]=='1')
				c++;
			}
			if(c>max){
				max=c;
				ans=1;
			}
			else if(c==max)
			ans++;
		}
	}
	printf("%d\n",max);
	printf("%d",ans);
}
