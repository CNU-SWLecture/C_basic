// P289 Programming 2번

#include <stdio.h>
int main(void)
{
    int num;
    int arr[100] = {0};

    printf("입력할 정수의 개수: ");
    scanf("%d", &num);

    for(int i=0; i<num; i++)
    {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &arr[i]);
    }

    for(int j=num-1; j>=0 ; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}   
