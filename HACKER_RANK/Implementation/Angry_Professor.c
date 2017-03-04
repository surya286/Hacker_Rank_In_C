#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,c=0;
        scanf("%d%d",&n,&k);
        while(n--){
            int m;
            scanf("%d",&m);
            if(m<=0)
                c++;
        }
        if(c>=k)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
