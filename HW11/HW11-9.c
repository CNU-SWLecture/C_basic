// P250 Programming 6번

#include <stdio.h>
int main(void)
{
    int num;
    for(num=1; num<101; num++)
    {
        if(num%3 == 0 && num%5 == 0)
            printf("%d ", num);
    }

    return 0;
}
