#include <stdio.h>
int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int ans=0;
    while(m--){
        int c;
        scanf("%d",&c);
        if((a+c)>=s && (a+c)<=t)
            ans++;
    }
    printf("%d\n",ans);
    ans=0;
    while(n--){
        int c;
        scanf("%d",&c);
        if((b+c)>=s && (b+c)<=t)
            ans++;
    }
    printf("%d",ans);
}

