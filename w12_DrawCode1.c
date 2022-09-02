#include <stdio.h>

int Sum(int n){
  int sum=0;
  int i=0;
  for(i=1;i<=n;i++){
    sum+=i;
  }
  return sum;
}

void main() {
  int n;
  printf("n: ");
  scanf("%d",&n);
  printf("%d",Sum(n));
}

//w11_DrawCode1 1. 1부터 자연수n까지의 합을 반환하는 함수 만들기.
