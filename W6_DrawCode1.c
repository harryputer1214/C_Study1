#include <stdio.h>

void main()
{
    int a,b;
    a=10;
    b=a++;
    printf("a=%d b=%d\n",a,b);
    b=++a;
    printf("a=%d b=%d\n",a,b);
    a=20;
    b=a--;
    printf("a=%d b=%d\n",a,b);
    b=--a;
    printf("a=%d b=%d\n",a,b);
}

//W6_DrawCode1 1.컴퓨터 내부에서 증감연산자가 처리되는 순서를 생각하여 다음 프로그램의 ①,②,③,④의 실행 결과를 예측해본 후 결과와 비교해 봅시다.
