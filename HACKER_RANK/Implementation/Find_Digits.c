#include <stdio.h>
int main(){
    int t; 
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        int temp=n;
        while(n!=0){
            int r=n%10;
            if(r!=0 && temp%r==0)
                c++;
            n=n/10;
        }
        printf("%d\n",c);
    }
    return 0;
}
