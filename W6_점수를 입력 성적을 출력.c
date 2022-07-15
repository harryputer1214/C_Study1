#include <stdio.h>

void main()
{
  int score=0;
  scanf("%d",&score);
  if(score>=90){
    printf("A");
  }
  else if(score>=80){
    printf("B");
  }
  else if(score>=70){
    printf("C");
  }
  else{
    printf("F");
  }
}

//점수를 입력받아 성적을 출력하는 프로그램
