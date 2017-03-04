#include<stdio.h>
int main(){
    int t,a0; 
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        long b; 
        long w; 
        scanf("%ld %ld",&b,&w);
        long x; 
        long y; 
        long z; 
        scanf("%ld %ld %ld",&x,&y,&z);
        if((y+z)<x)
        x=y+z;
        else if((x+z)<y)
        y=x+z;
        printf("%ld\n",(x*b)+(y*w));
    }
    return 0;
}
