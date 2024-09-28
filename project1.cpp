#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Calculator {
protected:
    int a, b;
public:
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    virtual int calculate() = 0;
};

class Add : public Calculator {
public:
    int calculate() {
        return a + b;
    }
};

class Sub : public Calculator {
public:
    int calculate() {
        return a - b;
    }
};

class Mul : public Calculator {
public:
    int calculate() {
        return a * b;
    }
};

class Div : public Calculator {
public:
    int calculate() {
        if (b != 0)
            return a / b;
        else {
            cout << "0���� ���� �� �����ϴ�." << endl;
            return 0;
        }
    }
};

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;

    while (true) {
        int x, y;
        char op;
        cout << "�� ������ �����ڸ� �Է��ϼ���>>";
        cin >> x >> y >> op;

        switch (op) {
        case '+':
            a.setValue(x, y);
            cout << a.calculate() << endl;
            break;
        case '-':
            s.setValue(x, y);
            cout << s.calculate() << endl;
            break;
        case '*':
            m.setValue(x, y);
            cout << m.calculate() << endl;
            break;
        case '/':
            d.setValue(x, y);
            cout << d.calculate() << endl;
            break;
        default:
            cout << "�߸��� �������Դϴ�." << endl;
            break;
        }
    }

    return 0;
}
#endif