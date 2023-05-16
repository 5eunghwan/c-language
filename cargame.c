#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car (int car_numer, int distance)

{
    int i;
    printf("CAR #%d:",car_numer);

    // 난수로 발생시킨 자동차의 거리를 별로 찍어내서 표현
    for ( i = 0; i < distance/10; i++) {
        printf("*");
    }
    printf("\n");
}

int main (void)
{
    int i;
    int car1_dist=0, car2_dist=0;

    srand((unsigned)time(NULL));

    // 별을 찍어내는 함수를 6번 실행하는 반복문
    for (i = 0; i < 6; i++){
        car1_dist += rand() % 100; // 첫번째 자동차의 거리 
        car2_dist += rand() % 100; // 두번째 자동차의 거리 
        disp_car(1, car1_dist); 
        disp_car(2, car2_dist);
        printf("---------------\n");
        _getch(); // 사용자에게 키보드로 하나의 키를 입력받는 함수 
    }
    return 0; 
}