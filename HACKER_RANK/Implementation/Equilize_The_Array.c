#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int temp=n;
    int a[100],i;
    for(i=0;i<100;i++)
    a[i]=0;
    while(n--){
        int t;
		scanf("%d",&t);
        a[t]++;
    }
    int max=0;
    for(i=0;i<100;i++){
		if(a[i]>max){
			max=a[i];
		}
    }
    printf("%d",temp-max);
    return 0;
}
