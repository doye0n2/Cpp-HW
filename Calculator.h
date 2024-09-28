#pragma once // ��� ������ �� ���� ���Եǵ��� ����

#ifndef CALCULATOR_H // ��� ���� �ߺ� ���� ����
#define CALCULATOR_H 

// Calculator Ŭ����: ��Ģ������ ���� �⺻ Ŭ����
class Calculator {
protected:
    int a, b; // �� ���� �ǿ����ڸ� �����ϴ� ��� ����

public:
    // setValue �Լ�: �� ���� ���� ���� a�� b�� �����ϴ� �Լ�
    void setValue(int x, int y);

    // calculate �Լ�: �� ���� Ŭ�������� �����ؾ� �ϴ� ���� ���� �Լ�
    // ��ȯ���� int�̸�, ������ ����� ��ȯ
    virtual int calculate() = 0; // ���� ���� �Լ� (�߻� �Լ�)
};

// Add Ŭ����: ������ �����ϴ� Ŭ����
class Add : public Calculator {
public:
    // calculate �Լ�: �� ���� ���� ����� ��ȯ
    int calculate(); // ���ϱ�
};

// Sub Ŭ����: ������ �����ϴ� Ŭ����
class Sub : public Calculator {
public:
    // calculate �Լ�: �� ���� �� ����� ��ȯ
    int calculate(); // ����
};

// Mul Ŭ����: ������ �����ϴ� Ŭ����
class Mul : public Calculator {
public:
    // calculate �Լ�: �� ���� ���� ����� ��ȯ
    int calculate(); // ���ϱ�
};

// Div Ŭ����: �������� �����ϴ� Ŭ����
class Div : public Calculator {
public:
    // calculate �Լ�: �� ���� ���� ����� ��ȯ
    int calculate(); // ������
};

#endif // CALCULATOR_H // ��� ���� ��
