#include<stdio.h>
int main(){
	int d1,m1,y1;
	int d2,m2,y2,fine;
	scanf("%d%d%d",&d1,&m1,&y1);
	scanf("%d%d%d",&d2,&m2,&y2);
	if(y1==y2){
		if(m1==m2){
			if(d1>d2){
				fine=15*(d1-d2);
			}
		}
		else if(m1>m2)
		fine=500*(m1-m2);
	}
	else if(y1>y2)
	fine=10000*(y1-y2);
	printf("%d",fine);
    return 0;
}
