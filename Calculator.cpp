// Calculator.cpp
#include "Calculator.h"   // Calculator Ŭ������ ����ΰ� ���Ե� ��� ������ ����

// Calculator Ŭ������ setValue �޼��带 ����
void Calculator::setValue(int x, int y) {
    a = x;   // �Էµ� ù ��° ���� x�� ��� ���� a�� ����
    b = y;   // �Էµ� �� ��° ���� y�� ��� ���� b�� ����
}

// Add Ŭ������ calculate �޼��带 ����
int Add::calculate() {
    return a + b;   // ��� ���� a�� b�� ���� ��ȯ
}

// Sub Ŭ������ calculate �޼��带 ����
int Sub::calculate() {
    return a - b;   // ��� ���� a���� b�� �� ����� ��ȯ
}

// Mul Ŭ������ calculate �޼��带 ����
int Mul::calculate() {
    return a * b;   // ��� ���� a�� b�� ���� ��ȯ
}

// Div Ŭ������ calculate �޼��带 ����
int Div::calculate() {
    if (b != 0)
        return a / b;   // b�� 0�� �ƴ� ��� a�� b�� ���� ����� ��ȯ
    else {   // b�� 0�� ���
        cout << "0���� ���� �� �����ϴ�." << endl;   // ���� �޽��� ���
        return 0;   // 0�� ��ȯ�Ͽ� ��� ����� ������ ǥ��
    }
}