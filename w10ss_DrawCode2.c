#include <stdio.h>

void main( ) {
  int input;
  while (1){
    scanf("%d",&input);
    if(input>30){
      printf("30보다 작은수를 입력해 주세요!");
    }
    else if(input==1){printf("금요일!");}
    else if(input==2){printf("토요일!");}
    else if(input==3){printf("일요일!");}
    else if(input==4){printf("월요일!");}
    else if(input==5){printf("화요일!");}
    else if(input==6){printf("수요일!");}
    else if(input==7){printf("목요일!");}
    else if(input%7==0){printf("금요일!");}
    else if(input%7==1){printf("토요일!");}
    else if(input%7==2){printf("일요일!");}
    else if(input%7==3){printf("월요일!");}
    else if(input%7==4){printf("화요일!");}
    else if(input%7==5){printf("수요일!");}
    else if(input%7==6){printf("목요일!");}
  }
}

//w10ss_DrawCode2
