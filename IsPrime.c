#include<stdio.h>

int isPrime(int);
int main()
{
	int a;
	printf("Input number : ");
	scanf("%d", &a);
	if (isPrime(a) == 1)
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
    for(i=1; i<=x/2; i++)
    {
        if(x % i == 1)
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