#ifndef CALCULATOR_H // 헤더 파일 중복 포함 방지
#define CALCULATOR_H 

// Calculator 클래스: 사칙연산을 위한 기본 클래스
class Calculator {
protected:
    int a, b; // 두 개의 피연산자를 저장하는 멤버 변수

public:
    // setValue 함수: 두 개의 정수 값을 a와 b에 설정하는 함수
    void setValue(int x, int y);

    // calculate 함수: 각 연산 클래스에서 구현해야 하는 순수 가상 함수
    // 반환형은 int이며, 연산의 결과를 반환
    virtual int calculate() = 0; // 순수 가상 함수 (추상 함수)
};

// Add 클래스: 덧셈을 수행하는 클래스
class Add : public Calculator {
public:
    // calculate 함수: 두 수를 더한 결과를 반환
    int calculate(); // 더하기
};

// Sub 클래스: 뺄셈을 수행하는 클래스
class Sub : public Calculator {
public:
    // calculate 함수: 두 수를 뺀 결과를 반환
    int calculate(); // 빼기
};

// Mul 클래스: 곱셈을 수행하는 클래스
class Mul : public Calculator {
public:
    // calculate 함수: 두 수를 곱한 결과를 반환
    int calculate(); // 곱하기
};

// Div 클래스: 나눗셈을 수행하는 클래스
class Div : public Calculator {
public:
    // calculate 함수: 두 수를 나눈 결과를 반환
    int calculate(); // 나누기
};

#endif // CALCULATOR_H // 헤더 파일 끝
