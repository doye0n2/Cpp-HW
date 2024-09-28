// Calculator.cpp
#include "Calculator.h"   // Calculator 클래스의 선언부가 포함된 헤더 파일을 포함

// Calculator 클래스의 setValue 메서드를 구현
void Calculator::setValue(int x, int y) {
    a = x;   // 입력된 첫 번째 정수 x를 멤버 변수 a에 저장
    b = y;   // 입력된 두 번째 정수 y를 멤버 변수 b에 저장
}

// Add 클래스의 calculate 메서드를 구현
int Add::calculate() {
    return a + b;   // 멤버 변수 a와 b의 합을 반환
}

// Sub 클래스의 calculate 메서드를 구현
int Sub::calculate() {
    return a - b;   // 멤버 변수 a에서 b를 뺀 결과를 반환
}

// Mul 클래스의 calculate 메서드를 구현
int Mul::calculate() {
    return a * b;   // 멤버 변수 a와 b의 곱을 반환
}

// Div 클래스의 calculate 메서드를 구현
int Div::calculate() {
    if (b != 0)
        return a / b;   // b가 0이 아닐 경우 a를 b로 나눈 결과를 반환
    else {   // b가 0일 경우
        cout << "0으로 나눌 수 없습니다." << endl;   // 에러 메시지 출력
        return 0;   // 0을 반환하여 계산 결과가 없음을 표시
    }
}