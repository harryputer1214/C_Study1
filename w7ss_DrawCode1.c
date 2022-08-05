#include <stdio.h>

void main() {
  int int1=0;
  int int2=0;
  float float1=0.0;
  float float2=0.0;
  float float3=0.0;
  float float4=0.0;
  float float5=0.0;
  printf("vvv 서로다른 정수2개, 실수5개 입력 vvv\n"); 
  scanf("%d%d%f%f%f%f%f",&int1,&int2,&float1,&float2,&float3,&float4,&float5);
  printf("%d, %d, %f, %f, %f, %f, %f 입력받음\n",int1,int2,float1,float2,float3,float4,float5);

  //1) 정수를 입력받아 음수인지 양수인지 출력해 봅시다.
  if (int1<0){
    printf("%d은(는) 음수입니다.\n",int1);
  }
  else{
    printf("%d은(는) 양수입니다.\n",int1);
  }

  //2) 정수를 입력받아 홀수인지 짝수인지 출력해 봅시다. 
  int even_odd=int2%2;
  if(even_odd==0){
    printf("%d은(는) 짝수입니다.\n",int2);
  }
  else{
    printf("%d은(는) 홀수입니다.\n",int2);
  }

  //3) 정수를 입력받아 3의 배수인지 판별하여 봅시다.
  int three=int1%3;
  if (three==0){
    printf("%d은(는) 3의 배수입니다.\n",int1);
  }
  else{
    printf("%d은(는) 3의 배수가 아닙니다.\n",int1);
  }

  //4) 정수 두 개를 입력받아 큰 수가 작은 수로 나누어 떨어지는지 판별하여 출력해 봅시다.
  int big;
  int small;
  if (int1>int2){
    big=int1;
    small=int2;
  }
  if (int1<int2){
    big=int2;
    small=int1;
  }
  int big_small=big/small;
  if(big_small==0){
    printf("%d÷%d은(는) 나누어 떨어집니다.\n",big,small);
  }
  else{
    printf("%d÷%d은(는) 나누어 떨어지지 않습니다.\n",big,small);
  }

 //5) 실수를 입력받아 절대값을 출력해 봅시다.
  float absolute;
  if (float1<0){
    absolute = float1*-1;
    printf("%f의 절대값은 %f입니다.\n",float1,absolute);
  }
  else{
    absolute = float1*-1;
    printf("%f의 절대값은 %f입니다.\n",float1,absolute);
  }

  //6) 실수 다섯 개를 입력받아 가장 큰 수를 출력해 봅시다.
  float max;
  if (float1>float2){
    max=float1;
  }
  else{
    max=float2;
  }
  if (max>float3){
    max=max;
  }
  else{
    max=float3;
  }
  if (max>float4){
    max=max;
  }
  else{
    max=float4;
  }
  if (max>float5){
    max=max;
  }
  else{
    max=float5;
  }
  printf("%f, %f, %f, %f, %f 중 %f이(가) 가장 큽니다.",float1, float2, float3, float4, float5, max);
}

//w7ss_DrawCode1 1.if 문을 이용하여 다음 프로그램을 만들어 봅시다.
