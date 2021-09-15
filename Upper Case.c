#include <stdio.h>
#include <string.h>

int main()
{
    //a = input()
    char a[50];
    int i;
    scanf("%s", a);

    //	for i in a :
    for (i = 0; i < strlen(a); i++)
    {
        //if (i is Upper case)
        //	print(a[i], end = "")

        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            printf("%c", a[i]);
        }
    }
    return 0;
}