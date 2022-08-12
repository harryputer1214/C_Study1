#include <stdio.h>

void main() {
  
  int i;
  
  //1) 1 -1 1 -1 1 -1 1 -1 1 -1
  int n=1;
  for (i=0;i<10;i++){
    printf("%d ",n);
    n*=-1;
  }
  printf("\n");

  //2) 1 0 1 0 1 0 1 0 1 0
  for (i=0;i<10;i++){
    printf("%d ",n);
    n*=-1;
    n++;
  }
  printf("\n");
  
  //3) 1 -2 3 -4 5 -6 7 -8 9 -10
  int x=1;
  for (i=0;i<10;i++){
    printf("%d ",(i+1)*x);
    x*=-1;
    
  }
  printf("\n");
}

//w8ss_DrawCode1 1.다음 반복문을 기본 문장으로 하여 다음과 같은 출력되는 프로그램을 만들어 봅시다.
