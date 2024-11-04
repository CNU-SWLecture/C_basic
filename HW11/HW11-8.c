// P249 Programming 3번

#include <stdio.h>
int main(void)
{
    int i, num, star;
    for(i=1; i<8; i++)
    {
        for(num=1; num<=i; num++)
        {
            printf("%d", num);
        }

        for(star=6; star>=i; star--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}