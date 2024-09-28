// main.cpp

#include "Calculator.h"   // Calculator Ŭ������ ���õ� ������ ������ ��� ������ ����

int main() {   // ���α׷��� �������� main �Լ� ����
    Add a;   // ������ �����ϴ� Add Ŭ������ ��ü a ����
    Sub s;   // ������ �����ϴ� Sub Ŭ������ ��ü s ����
    Mul m;   // ������ �����ϴ� Mul Ŭ������ ��ü m ����
    Div d;   // �������� �����ϴ� Div Ŭ������ ��ü d ����

    while (true) {   // ���� ���� ����
        int x, y;   // ����ڷκ��� �Է¹��� �� ������ ���� ���� x, y ����
        char op;   // ����ڷκ��� �Է¹��� ������(������)�� ���� ���� op ����
        cout << "�� ������ �����ڸ� �Է��ϼ���>>";   // ����ڿ��� �Է��� ��û�ϴ� �޽��� ���
        cin >> x >> y >> op;   // �Էµ� ���� ���� x, y, op�� ����

        switch (op) {                  // �Էµ� �����ڿ� ���� �۾��� �����ϴ� switch�� ����
        case '+':                     // �����ڰ� '+'�� ���
            a.setValue(x, y);            // Add ��ü a�� x, y ���� ����
            cout << a.calculate() << endl;   // ��� ����� ���
            break;                     // switch�� ����
        case '-':                     // �����ڰ� '-'�� ���
            s.setValue(x, y);            // Sub ��ü s�� x, y ���� ����
            cout << s.calculate() << endl;   // ��� ����� ���
            break;
        case '*':                     // �����ڰ� '*'�� ���
            m.setValue(x, y);            // Mul ��ü m�� x, y ���� ����
            cout << m.calculate() << endl;   // ��� ����� ���
            break;
        case '/':                     // �����ڰ� '/'�� ���
            d.setValue(x, y);            // Div ��ü d�� x, y ���� ����
            cout << d.calculate() << endl;   // ��� ����� ���
            break;
        default:                     // ���� case�� ��ġ���� �ʴ� ���
            cout << "�߸��� �������Դϴ�." << endl;   // �߸��� �����ڿ� ���� ��� �޽��� ���
            break;   // switch�� ����
        }
    }

    return 0;   // ���α׷� ����
}