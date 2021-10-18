#include <stdio.h>

// 프로그래밍 언어론 과제 1

//문제 1
static int x = 7;

void q1(){
     int x = 3;
     printf("x=%d",x);  
}


 int main(void){
     q1();
 }

// Q2 referencing environment: procedureR ,A,C,Z



// Q3 static scope시 출력: x=1 x=1 x=2 x=2
//    dynamic scope 출력:  x=1 x=0  x=2  x=0