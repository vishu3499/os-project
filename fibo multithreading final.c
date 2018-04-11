#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int storage[100];
int count;
void *gen()
{
    int n,a=0,b=1,c=2;
    printf("Enter Term: ");
    scanf("%d", &n);
    count=n;
	storage[0]=a;
	storage[1]=b;
	for(c=2;c<n;c++)
	{
    	storage[c]=storage[c-1]+storage[c-2];
	}	
}
void *fibo()
{
	
	int i;
	pthread_t child;
    pthread_create( &child, NULL, gen, NULL);
    pthread_join(child, NULL);
    printf("\nFibo Series is:\n");
    for(i=0;i<count;i++)
	{
		printf("%d\t",storage[i]);
	} 
}

int main()
{
    pthread_t parent;
    pthread_create( &parent, NULL, fibo, NULL);
    pthread_join( parent, NULL);
    printf ("\n");
    return 0;
}
