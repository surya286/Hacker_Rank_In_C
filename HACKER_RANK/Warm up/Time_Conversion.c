#include<stdio.h>
#include<string.h>
int main()
{
	int h,m,s;
	char str[2],a,b;
	scanf("%d%c%d%c%d%s",&h,&a,&m,&b,&s,str);
	if(strcmp(str,"PM")==0)
	{
		if(h==12)
		h=0;
		h=h+12;
		if(h<10 && m<10 && s<10)
		printf("0%d:0%d:0%d",h,m,s);
			else if(h<10 && m<10)
		printf("0%d:0%d:%d",h,m,s);
			else if(h<10 && s<10)
		printf("0%d:%d:0%d",h,m,s);
			else if(m<10 && s<10)
		printf("0%d:0%d:0%d",h,m,s);
			else if(h<10)
		printf("0%d:%d:%d",h,m,s);
			else if(m<10)
		printf("%d:0%d:%d",h,m,s);
			else if(s<10)
		printf("%d:%d:0%d",h,m,s);
		else
		printf("%d:%d:%d",h,m,s);
	}
	else{
		if(h==12)
		h=0;
		if(h<10 && m<10 && s<10)
		printf("0%d:0%d:0%d",h,m,s);
			else if(h<10 && m<10)
		printf("0%d:0%d:%d",h,m,s);
			else if(h<10 && s<10)
		printf("0%d:%d:0%d",h,m,s);
			else if(m<10 && s<10)
		printf("0%d:0%d:0%d",h,m,s);
			else if(h<10)
		printf("0%d:%d:%d",h,m,s);
			else if(m<10)
		printf("%d:0%d:%d",h,m,s);
			else if(s<10)
		printf("%d:%d:0%d",h,m,s);
		else
		printf("%d:%d:%d",h,m,s);
	}
	return 0;
}
