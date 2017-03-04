#include <stdio.h>
int main(){
    int n; 
    int m,ans=0,i,j; 
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=1;i<=100;i++){
        int c=0;
        for(j=0;j<n;j++){
            if(i%a[j]==0)
                c++;
        }
        if(c==n){
            int c1=0;
            for(j=0;j<m;j++){
                if(b[j]%i==0)
                    c1++;
            }
            if(c1==m)
            ans++;
        }
    }
    printf("%d",ans);
}

