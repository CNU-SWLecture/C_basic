// 10/28 한글파일 P3 1번

#include <stdio.h>
int main(void)
{
    int coupon, con;

    printf("쿠폰 개수 입력: ");
    scanf("%d", &coupon);

    con = coupon / 10;

    if(con == 0)
        printf("커피 한 잔\n");
    
    else if(con == 1)
        printf("다이어리\n");

    else
        printf("여행 가방\n");

    return 0;
}