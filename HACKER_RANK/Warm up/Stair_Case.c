#include <stdio.h>
int main(){
    int i,j,n,k,l;
	scanf("%d",&n);
	k=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
	 	printf(" ");
		}
		for(l=j;l<n;l++)
		{
			printf("#");
		}
		k--;
		printf("\n");
	}
    return 0;
}

