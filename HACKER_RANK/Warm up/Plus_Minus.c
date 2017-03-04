#include<stdio.h>
int main()
{
	int n,i;
	float p=0.0,x=0.0,z=0.0;
	scanf("%d",&n);
    float a[n];
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		if(a[i]>0)
		p++;
		else if(a[i]<0)
		x++;
		else
		z++;
	}
	printf("%f\n%f\n%f",p/n,x/n,z/n);
}
