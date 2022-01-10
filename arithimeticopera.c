#include<stdio.h>
 addition(int a,int b)
 {
 	int c=a+b;
 	printf("addition of %d+%d=%d\n",a,b,c);
 }
 subtraction(int a,int b)
 {
 	int x=a-b;
	printf("subtraction of %d-%d=%d\n",a,b,x);
 }
 multiplication(int a,int b)
 {
 	int e=a*b;
 	printf("multiplication of %d*%d=%d\n",a,b,e);
 }
  division(int a,int b)
 {    
 	float g;
 	// both are working
	 g=(float)a/(float)b;
	 //g=(double)a/(double)b;	
 	printf("division of %d/%d=%lf\n",a,b,g);
 }
 main()
 {
 	int a,b;
 	scanf("%d%d",&a,&b);
 	addition(a,b);
 	subtraction(a,b);
 	multiplication(a,b);
 	division(a,b);
 }
