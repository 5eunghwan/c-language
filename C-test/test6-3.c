#include <stdio.h>

int main(void) 
{
int n,i,sum;

  i = 0;
  sum = 0;

  printf("정수를 입력하시오:");
  scanf("%d",&n);

  while (i <= n)
    {
    sum += i;
    i = i + 2;
      }
  printf("1부터 %d까지의 짝수 합은 %d입니다.",n,sum);
  return 0;
}
