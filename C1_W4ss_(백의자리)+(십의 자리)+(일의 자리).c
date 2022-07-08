#include <stdio.h>

void main()
{
  int in=0;
  int m=0;
  int out100=100;
  int out10=10;
  int out1=0;
  int out=0;
  scanf("%d",&in);
  out100=in/100;
  out1=in%10;
  m=out100*100;
  in=in-m;
  out10=in/10;
  
  out=out10+out1+out100;
  printf("합: %d\n",out);
  out=out10*out1*out100;
  printf("곱: %d\n",out);
  printf("%d,%d,%d\n",out100,out10,out1);
}

//C3_CD-C1 60.p (2.세 자리 자연수를 분리하여 출력하고 각 자리 수의 합과 곱을 출력하는 프로그램을 만들어 봅시다.)
