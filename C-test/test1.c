#include <stdio.h>

int main(void) 
{
  float radius;
  float area;

  printf("반지름을 입력하시오: ");
  scanf("%f",&radius);

  area = radius * radius * 3.14;

  printf("원의 면적: %f",area);
 
  return 0;
}
