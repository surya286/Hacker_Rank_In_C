#include<stdio.h>
#include<string.h>
int main(){
	char s[100000];
	int a[26],i,run=1,count=0,val;
	scanf("%s",s);
	for(i=0;i<26;i++){
		 a[i]=0; 
	}
	i=0;
	while(s[i]!='\0'){
		if(s[i]>='a'&&s[i]<='z'){
			 a[s[i]-'a']++;
		}
		i++; 
	}
	for(i=0;i<26;i++){
		if(a[i]>0){
			if(run==1){
				val=a[i];
				run++;
			}
			else if(a[i]!=val){
				 count++;
			}
		}
	}
	if(count<=1)
		printf("YES");
	else
		printf("NO");
		return 0;
}
/*
#include<stdio.h>
#include<string.h>
int main(){
	char s[10000];
	scanf("%s",s);
	long int a[26],i,j,b[26];
	for(i=0;i<26;i++)
	a[i]=0;
	for(i=0;i<strlen(s);i++){
		a[s[i]-97]++;
	}
	long int k=0;
	for(i=0;i<26;i++){
		if(a[i]>0){
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if(b[i]>b[j]){
				int temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	int c=1;
	for(i=1;i<k;i++){
		if(b[0]==b[i])
		c++;
	}
	if(c==k)
	printf("YES");
	else if(c==1){
		int t=2;
		for(i=2;i<k;i++){
			if(b[1]==b[i])
			t++;
		}
		if(t==k){
			if((b[0]-b[1])==1)
			printf("YES");
		}
		else
		printf("NO");
	}
	else if(c==k-1){
		if(b[k-1]==1)
		printf("YES");
		else
		printf("NO");
	}
	else
	printf("NO");
	return 0;
}
*/
