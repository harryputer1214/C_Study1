#include <stdio.h>

void main() {
  int i;
  
  //1) 1 -4 +9 -16 + ... -484 +529
  int x=1;
  int add=1;
  int last=0;
  
  for (i=0;i<23;i++){
    add+=2;
    last+=x;
    printf("%d ",x);
    if (x>0){
      x=x+add;
    }
    else{
      x=x-add;
      }
    x*=-1;
  
  
  }
  printf("\n");

  printf("%d\n",last);
  }

//w8ss_DrawCode2 2. 다음 수식의 결과를 출력하는 프로그램을 만들어 봅시다.
