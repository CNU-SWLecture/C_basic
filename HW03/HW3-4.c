// P77 Programming 3번

#include <stdio.h>
int main(void)
{
    int price = 0, number = 0;

    printf("상품 가격을 입력하시오: ");
    scanf("%d", &price);
    printf("상품의 개수를 입력하시오: ");
    scanf("%d", &number);

    printf("총 가격은 %d입니다.\n", price * number);

    return 0;
}