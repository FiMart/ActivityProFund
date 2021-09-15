#include<stdio.h>
int main()
{
    int x,y,z;
    x=1;
    scanf("%d",&z);
    while (x<=z)
    {
        y=1;
            while(y<=x)
            {
                printf("*");
                ++y;
            }
            printf("\n");
            ++x;
    }
    return 0;
}