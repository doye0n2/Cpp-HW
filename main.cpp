// main.cpp

#include "Calculator.h"   // Calculator 클래스와 관련된 선언을 포함한 헤더 파일을 포함

int main() {   // 프로그램의 시작점인 main 함수 정의
    Add a;   // 덧셈을 수행하는 Add 클래스의 객체 a 생성
    Sub s;   // 뺄셈을 수행하는 Sub 클래스의 객체 s 생성
    Mul m;   // 곱셈을 수행하는 Mul 클래스의 객체 m 생성
    Div d;   // 나눗셈을 수행하는 Div 클래스의 객체 d 생성

    while (true) {   // 무한 루프 시작
        int x, y;   // 사용자로부터 입력받을 두 정수를 위한 변수 x, y 선언
        char op;   // 사용자로부터 입력받을 연산자(문자형)를 위한 변수 op 선언
        cout << "두 정수와 연산자를 입력하세요>>";   // 사용자에게 입력을 요청하는 메시지 출력
        cin >> x >> y >> op;   // 입력된 값을 변수 x, y, op에 저장

        switch (op) {                  // 입력된 연산자에 따라 작업을 수행하는 switch문 시작
        case '+':                     // 연산자가 '+'인 경우
            a.setValue(x, y);            // Add 객체 a에 x, y 값을 설정
            cout << a.calculate() << endl;   // 계산 결과를 출력
            break;                     // switch문 종료
        case '-':                     // 연산자가 '-'인 경우
            s.setValue(x, y);            // Sub 객체 s에 x, y 값을 설정
            cout << s.calculate() << endl;   // 계산 결과를 출력
            break;
        case '*':                     // 연산자가 '*'인 경우
            m.setValue(x, y);            // Mul 객체 m에 x, y 값을 설정
            cout << m.calculate() << endl;   // 계산 결과를 출력
            break;
        case '/':                     // 연산자가 '/'인 경우
            d.setValue(x, y);            // Div 객체 d에 x, y 값을 설정
            cout << d.calculate() << endl;   // 계산 결과를 출력
            break;
        default:                     // 위의 case와 일치하지 않는 경우
            cout << "잘못된 연산자입니다." << endl;   // 잘못된 연산자에 대한 경고 메시지 출력
            break;   // switch문 종료
        }
    }

    return 0;   // 프로그램 종료
}