// c = getchar() -> scanf("%c", &c)랑 동일한 역할
// 1 : 정수, '1' : 문자
// \t : 커서의 위치를 현재 라인에서 설정된 다음 탭 위치로 옮긴다.

#include <stdio.h>
int main(void)
{
    char c; // 변수 선언

    c = 'A'; // 변수 c에 문자 'A'를 저장

    printf("A의 아스키 코드 = %d\n", c);

    return 0;
}