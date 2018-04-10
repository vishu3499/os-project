#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *fibo()
{
    int n,a=0,b=1,c=2,d;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("Fibbo is: ");
    printf("%d\t%d\t",a,b);
    while(c<n)
    {
    	d=a+b;
    	printf("%d\t", d);
    	a=b;
    	b=d;
    	c++;
	}
}


int main()
{
    int rt1, rt2;
    pthread_t t1, t2; 
    pthread_create( &t1, NULL, fibo, NULL);
    pthread_join( t1, NULL);
    printf ("\n");
    return 0;

}
