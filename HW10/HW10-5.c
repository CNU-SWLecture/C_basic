// P249 Programming 4번

#include <stdio.h>
int main(void)
{
    int i = 0; // while문 반복횟수 변수
    int num = 0, sum = 0; // 입력받을 변수, 합계를 저장할 변수 설정

    while(1)
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &num);

        if(num == 0)
        {
            break;
        }

        // 입력된 정수를 합계에 더하기
        sum += num; // sum = sum + num
    }
    
    printf("합계=%d", sum); // 합계 출력

    return 0;
}