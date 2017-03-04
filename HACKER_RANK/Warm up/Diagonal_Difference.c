#include <stdio.h>
int main()
{
    int n,i,j,k,c=0,b=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            c=c+a[i][j];
        }
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        b=b+a[i][j];
    }
    int diff=c-b;
    if(diff<0)
        printf("%d",diff+(-2*diff));
    else
        printf("%d",diff);
    return 0;
}

