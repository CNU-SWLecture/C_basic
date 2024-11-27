// P289 Programming 1번

#include <stdio.h>
int main(void)
{
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    for(i=1; i<13; i++)
    {
        printf("%d월은 %d일까지 있습니다.\n", i, days[i-1]);
    }

    return 0;
}