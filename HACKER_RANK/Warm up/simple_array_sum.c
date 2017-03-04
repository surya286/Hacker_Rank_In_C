#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
 
    int i,sum=0;
    for(i=0;i<n;i++)
        {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
