#include <stdio.h>

int main(void) {
  
  double f_temp;
  double c_temp;

  printf("화씨온도를 입력하세요 :");
  scanf("%lf",&f_temp);

  c_temp = 5.0 / 9.0 * (f_temp-32);

  printf("섭씨온도 : %f",c_temp);
  return 0;
}
