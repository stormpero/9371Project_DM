#include "Allfunc.h"

Drob MUL_QQ_Q(Drob num1, Drob num2) // ��������� ������
{
	Drob result;	//��������� ������
	result.numerator = MUL_ZZ_Z(num1.numerator, num2.numerator); //������������ ������������ ����������
	result.denominator = MUL_ZZ_Z(num1.numerator, num2.numerator);  // ������������ ������������ ������������
	result = RED_Q_Q(result);
	return result; //���������� �������� ���������
}
