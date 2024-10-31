// P250 Programming 5번

#include <stdio.h>
int main(void)
{
    int i = 1; 

    while(i <= 100)
    {
        if(i%3 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

// printf가 매번 각각의 3의 배수를 하나씩 출력함
// but. 프로그램이 매우 빠르게 실행되므로 출력 결과가 한 번에 표시되는 것처럼 보임