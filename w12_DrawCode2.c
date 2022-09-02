#include <stdio.h>

int Power(int n){
  int sum=0;
  sum=n*n;
  return sum;
}

void main() {
  int n;
  printf("n: ");
  scanf("%d",&n);
  printf("%d",Power(n));
}

//w11_DrawCode2 2.자연수 n의 제곱을 반환하는 함수 만들기.
