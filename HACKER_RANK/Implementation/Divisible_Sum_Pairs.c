#include<stdio.h>
int main()
{
    int n,d,i,j;
    scanf("%d%d",&n,&d);
    int a[n],ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(((a[i]+a[j])%d)==0)
                ans++;
        }
    }
    printf("%d",ans);
}

