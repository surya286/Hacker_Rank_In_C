#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    long n,m,i;
    scanf("%d",&t);
    while(t--){
        long int ans,j;
        scanf("%ld%ld",&n,&m);
		ans=n;
		for(i=1;n+i<m;i=2*i){
			j=n+i;
			ans=ans&j;
		}
        printf("%ld\n",ans&m);
    }
    return 0;
}

