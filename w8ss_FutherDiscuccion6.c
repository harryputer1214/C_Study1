#include <stdio.h>

void main() {
  int i;
  int day=0;
  for(i=15; i>0; i=i+3){
    i=i-4;
    day++;
  }
  printf("%d\n",day);
}

//w8ss_FutherDiscuccion6 6. 거미가 15m높이에서 낮엔 4m내려오고 밤엔 3m올라오는데 다내려오려면 몇일?
