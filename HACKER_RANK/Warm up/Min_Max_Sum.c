#include <stdio.h>
int main(){
    long long int a[5],sum=0,max=-123456234567,min=98765432234;
    int i;
    for(i=0;i<5;i++){
          scanf("%lld",&a[i]);
          sum=sum+a[i];
    }
    for(i=0;i<5;i++){
        if((sum-a[i])>max){
            max=sum-a[i];
        }
        if((sum-a[i])<min){
            min=sum-a[i];
        }
    }
    printf("%lld %lld",min,max);
    return 0;
}

