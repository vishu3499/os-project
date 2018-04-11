#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,v,r,t=200,c;
	float x=0.7,p;
	printf("enter memory access time:- ");
	scanf("%d",&m);
	printf("enter time for replaced page not modified(milisec) :- ");
	scanf("%d",&v);
	printf("enter time for replaced page is modified(milisec):- ");
	scanf("%d",&r);
		//t= (((1*m - p* m)+ (x * p * r) + (0.3 * p * v));
		//t-m=p((x*r)+(0.3*v)-m);
		p=(t-m)/((x*r*1000000)+(0.3*v*1000000)-m);
		printf("access time:- %f%%", p*100);
		
 return 0;	
}
