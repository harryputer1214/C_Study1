#include <stdio.h>

int main(void) {
  int n = 5;
  
  for (int i=1;i<n+1;i++) {
    for (int j=n;j>i;j--) {
      printf(" ");
    }
    for (int j=1;j<i+1;j++) {
      printf("%d",j);
    }
    printf("\n");
  }
    
  return 0;
}
