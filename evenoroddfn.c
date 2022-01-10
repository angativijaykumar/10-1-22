#include<stdio.h>
evenorodd(int a)
{
	if(a%2==0)
	printf("%d is even",a);
	else
	printf("%d is odd",a);
}
main()
{
	int a;
	scanf("%d",&a);
	evenorodd(a);
}
