#include<stdio.h>
simpleinterest(int p,float t,float r)
{
float si=(p*t*r)/100;
printf("%f",si);	
}
main()
{
	int p;
	float t,r;
	scanf("%d",&p);
	scanf("%f%f",&t,&r);
	simpleinterest(p,t,r);
}
