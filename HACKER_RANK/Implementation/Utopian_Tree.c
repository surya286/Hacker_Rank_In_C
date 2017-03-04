#include <stdio.h>
int main(){
    int t,a0; 
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n; 
        int tree=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            if(i%2==0)
                tree++;
            else
                tree=2*tree;
        }
        printf("%d\n",tree);
    }
    return 0;
}
