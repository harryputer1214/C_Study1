#include <stdio.h>

void main() {
  int i;
  int j;
  int input;
  scanf("%d",&input);
  for (i=input;i>0;i--){
    for (j=i;j>0;j--){
      printf("*");
    }
    printf("\n");
  }
}
