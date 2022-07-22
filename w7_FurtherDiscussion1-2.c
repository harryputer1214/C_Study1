#include <stdio.h>

void main() 
{
  int n=0;
  printf("정수 입력: ");
  scanf("%d",&n);
	
  if(12%n==0 && 30%n==0)
  {
    printf("%d은(는) 12와 30의 공약수입니다.",n);
  }  
  else
  {
  	printf("%d은(는) 12와 30의 공약수가 아닙니다.",n);
  } 
  
  //w7_FurtherDiscussion1-2 1.if 문을 이용하여 다음 프로그램을 만들어 봅시다.
}
