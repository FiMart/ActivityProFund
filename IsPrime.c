#include<stdio.h>

int isPrime(int);
int main()
{
	int a;
	printf("Input number : ");
	scanf("%d", &a);
	if (isPrime(a) == 0)
    {
        printf("Prime Number");
    }  
	else
    {
        printf("Not Prime Number");
    } 
	return 0;
}

int isPrime(int x)
{
    int i;
    for(i=2; i<=x/2; i++)
    {
        if(x % i != 0)
        {
            continue;
        }
        else
        {
            return 1;
        }
            
    }
    return 0;
	
}