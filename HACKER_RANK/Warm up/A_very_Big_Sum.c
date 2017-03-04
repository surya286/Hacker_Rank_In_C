#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    long long int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%llu",&arr[arr_i]);
    }
    long long int sum=0;
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       sum=sum+arr[arr_i];
    }
    printf("%llu",sum);
}
