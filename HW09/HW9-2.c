// P200 연습문제 8번

#include <stdio.h>
int main(void)
{
    int x, num=0;

    printf("x의 값을 입력하시오 : ");
    scanf("%d", &x);

    switch (x)
    {
        case -1: 
            num--;
            printf("%d", num);
            break;

        case 1:
            num++;
            printf("%d", num);
            break;
    
        default:
            num = 0;
            printf("%d", num);
            break;
    }

    return 0;
}