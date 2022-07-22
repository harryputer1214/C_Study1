#include <stdio.h>

void main() 
{
  int n=0;
  printf("정수 입력: ");
  scanf("%d",&n);
	
  if(n%2==0 && n%3==0)
  {
    printf("%d은(는) 2와 3의 공배수입니다.");
  }  
  else
  {
  	printf("%d은(는) 2와 3의 공배수가 아닙니다.");
  } 
  
  //w7_FurtherDiscussion1-1 1.if 문을 이용하여 다음 프로그램을 만들어 봅시다.
}
