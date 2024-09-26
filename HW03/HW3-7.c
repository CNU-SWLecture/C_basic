// P78 Programming 6번

#include <stdio.h>
int main(void)
{
    int ang1 = 0, ang2 = 0;
    int ang3 = 0;

    printf("삼각형의 내각 2개(빈칸으로 분리) :");
    scanf("%d %d", &ang1, &ang2);

    ang3 = 180 - ang1 - ang2;
    printf("세번째 각은 %d\n", ang3);

    return 0;
}