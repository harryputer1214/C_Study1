#include <stdio.h>
#include <math.h>

int ReverseNum(int n, int m) {
  int sum = 0;
  int i;
  int test = 0;
  int ten_mul = 1;
  
  int divi2 = (int)pow(10, m - 1);
  i = divi2;
  for (i = divi2; i > 0; i = i / 10) {
      test = n / i;
      n -= (test * i);
      sum += test * ten_mul;
      ten_mul = ten_mul * 10;
  }
  return sum;
}
int DigitNumber(int n) {
  int sum = 0;
  int divi = 1;
  int i;
  for (i = 1; divi != 0; i *= 10) {
      divi = n / i;
      sum++;

  }
  sum -= 1;
  return sum;
}
int main()
{
  int n = 0;
  scanf("%d", &n);
  int m = DigitNumber(n);
  if (m > 1) {
      printf("%d", ReverseNum(n, m));

  }
  else {
      printf("%d", n);
  }
  return 0;
}

//(숙제)w12_DrawCode8 뒤집는함수 만들기,
