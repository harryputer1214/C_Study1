#include <stdio.h>

void main() 
{
  int s=0;
  int m=0;
  int h=0;
  printf("초: ");
  scanf("%d",&s);
  h=s/3600;
  s=s-h*3600;
  m=s/60;
  s=s-m*60;
  printf("%dh %dm %ds",h,m,s);

  //w6ss_FurtherDiscusion4 4.(-~~)다엘이의 단축마라톤 기록을 입력받아 시 분 초로 변환하여 출력하는 프로그램을 작성해 봅시다.
}
