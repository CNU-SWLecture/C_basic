#include <stdio.h>
int main(void)
{
    int i, k;

    for (i = 1; i<=9; i++)
    {
        for (k = 1; k<=9; k++)
        {
            printf("%d X %d = %d\t", k, i, i*k);
        }
        printf("\n");
    }  

    return 0;
}


