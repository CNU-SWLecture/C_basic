// P249 Programming 2번

#include <stdio.h>
int main(void)
{
    int repeat = 0; // 반복횟수
    int i = 0;      // while문 반복 변수 초기값 : 0

    printf("몇 번이나 반복할까요?: ");
    scanf("%d", &repeat);

    while(i < repeat)
    {
        printf("안녕하세요?\n");
        i++;
    }

    return 0;
}