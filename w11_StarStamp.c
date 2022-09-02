#include <stdio.h>

void star(int n){
  int i=0;
  int j=0;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  
}

void main() {
  int n;
  printf("n: ");
  scanf("%d",&n);
  star(n);
}

//w11_StarStamp
