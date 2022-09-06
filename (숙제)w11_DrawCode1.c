#include <stdio.h>

int main()
{
  int sum = 0;
  int plus = 0;
  int i;
  
  for(i = 1; i <= 10; i++){
    plus += i;
    sum += plus;
  }
  
  printf("sum: %d\n",sum);
}

//(숙제)w11_DrawCode1 1+(1+2)+(1+2+3)+.......(1+2+3+4+5+.......+10)을 계산하는 프로그램
