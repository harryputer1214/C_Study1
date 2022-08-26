#include <stdio.h>

void main() {
  int i;
  int j;
  for (i=6;i>0;i--){
    printf("[ %d학년 ] ",i);
    for (j=1;j<8;j++){
      printf("[ %d반 ] ",j);
    }
    printf("\n");
  }
}

//w11_LightItUp2
