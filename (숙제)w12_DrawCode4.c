#include <stdio.h>

int DigitNumber(int n) {
  int sum = 0;
  int divi;
  int i;
  for(i=1;divi!=0;i*=10){
    divi=n/i;
    sum++;}
  sum-=1;
  return sum;
}

int main(){
  while(1){
    int n = 0;
    scanf("%d",&n);
    printf("%d자리\n",DigitNumber(n));
    }
}

//(숙제)w12_DrawCode4 숫자 자릿수 함수 만들기.
