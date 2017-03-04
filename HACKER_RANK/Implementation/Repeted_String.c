#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    long int n,c=0;
    int i;
    scanf("%ld",&n);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='a')
            c++;
    }
    long int ans=(n/strlen(s))*c;
    for(i=0;i<(n%strlen(s));i++){
        if(s[i]=='a')
            ans++;
    }
    printf("%ld",ans);
    return 0;
}
