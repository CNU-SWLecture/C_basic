// P250 Programming 7번

#include <stdio.h>
int main(void)
{
    int x, y = 0; // 시작, 끝 정수
    int sum = 0; // 합계 저장
    int start, end;   // 입력한 시작과 끝 값을 보존할 변수

    printf("시작정수: ");
    scanf("%d", &x);
    printf("종료정수: ");
    scanf("%d", &y);

    // 입력한 값을 보존
    start = x;
    end = y;

    while(x <= y) // x가 y보다 작거나 같은 동안 반복
    {
        sum += x; // x를 sum에 더함
        x++; // x를 1씩 증가시켜 다음 숫자로 이동
    }

    printf("%d에서 %d까지의 합 = %d", start, end, sum);
    
    return 0;
}