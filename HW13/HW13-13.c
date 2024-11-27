// P289 Programming 3번

#include <stdio.h>

int main(void)
{
    int num;
    int arr[100] = {0}; // 배열 크기 고정
    int sum = 0; // 합계를 저장할 변수

    printf("입력할 정수의 개수 (최대 100): ");
    scanf("%d", &num);

    // 배열 크기 초과 확인
    if (num > 100 || num <= 0)
    {
        printf("입력할 수 있는 정수의 개수는 1 이상 100 이하입니다.\n");
        return -1; // 프로그램 종료
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d번째 정수를 입력하시오: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < num; j++)
    {
        sum += arr[j];
    }

    printf("입력한 정수의 합: %d\n", sum);

    return 0;
}