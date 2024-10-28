// P203 Programming 9번

#include <stdio.h>
int main(void)
{
    int num1 = 0, num2 = 0;
    char cal;

    printf("수식을 입력하시오(예 : 2 + 5): ");
    scanf("%d %c %d", &num1, &cal, &num2);

    switch (cal)
    {
        case '+' :
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;

        case '-' :
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;

        case '*' :
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;
        
        case '/' :
            printf("%d / %d = %d", num1, num2, num1 / num2);
            break;

        default:
            printf("지원되지 않는 연산자입니다.\n");
            break;
    }
    
    return 0;
}