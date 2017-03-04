#include <stdio.h>
int main(){
    int x1,v1,x2,v2,i;
	long int k1;
	long int k2;
    int c=0;
	scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
	if((x2>x1)&&(v2>v1))
		printf("NO");
    else if(x1>x2 && v1>v2)
        printf("NO");
	else{
        for(k1=x1,k2=x2;k1<=100000000&&k2<=100000000;k1=k1+v1,k2=k2+v2){
            if(k1==k2){
                printf("YES");
                c++;
                break;
            }
        }
        if(c==0)
        printf("NO");
    }
}
