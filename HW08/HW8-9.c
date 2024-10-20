// P201 Programming 2번

#include <stdio.h>
int main(void)
{
    int n1=0, n2=0;

    printf("정수를 입력하시오:");
    scanf("%d", &n1);
    printf("정수를 입력하시오:");
    scanf("%d", &n2);

    if(n1 - n2 > 0)
        {printf("두 수의 합은 %d입니다.\n", n1+n2);
        printf("두 수의 차는 %d입니다.\n", n1-n2);}
    
    else
        {printf("두 수의 합은 %d입니다.\n", n1+n2);
        printf("두 수의 차는 %d입니다.\n", n2-n1);}

    return 0;
}