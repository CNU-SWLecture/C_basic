// P201 Programming 3번

#include <stdio.h>
int main(void)
{
    int x = 0;

    printf("요일을 0(일요일)에서 6까지의 정수로 입력하시오:");
    scanf("%d", &x);

    if(x==0 || x==6)
        printf("주말입니다.\n");
    else
        printf("주중입니다.\n");

    return 0;
}