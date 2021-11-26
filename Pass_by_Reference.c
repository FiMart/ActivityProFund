#include<stdio.h>
int swap(int *x, int *y)
{
    int c;
    c = *y;
    *y = *x;
    *x = c;
}

int main()
{
    int a,b;
    printf("Input Number : ");
    scanf("%d %d", &a,&b);
    swap(&a,&b);
    printf("Output Number : %d %d", a,b);
    return 0;
}