#include <stdio.h>
int main(void)
{
    short money = 32767;
    money += money;
    printf("money = %d\n", money);

    return 0;
}