#include <stdio.h>
int main() {
       int n,m,i,j,ans=0;
    scanf("%d%d",&n,&m);
     for(i=n;i<=m;i++){
         for(j=n;j<=m;j++){
             int c=i^j;
             if(c>ans)
                 ans=c;
         }
     }
    printf("%d",ans);
     return 0;
}
