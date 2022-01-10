#include<stdio.h>

product (int a,int b, int c)
{
	int d=a*b*c;
	printf("%d\n",d);
}

main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	product(a,b,c);
 } 
