#include <stdio.h>

void main( ) {
  int input=0;
  while(1){
    input=0;
    scanf("%d",&input);
    if(input==1 || input==3 || input==5 || input==7 || input==9){
      printf("홀수");
      }
    else if(input==2 || input==4 || input==6 || input==8 || input==10){
      printf("짝수");
      }
    else{printf("자연수");}
    }
}

//w10ss_DrawCode1 1. 자연수를 입력받아 다음조건대로 출력하는 프로그램울 만들어 봅시다.
//
//               |  [처리조건]
//               |  입력받은 수가 1, 3, 5, 7, 9 이면 "홀수"를 출력한다.
//               |  입력받은 수가 2, 4, 6, 8, 10 이면 "짝수"를 출력한다.
//               |  그 외는 "자연수"를 출력한다.
