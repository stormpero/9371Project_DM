#include "Allfunc.h"

Drob DIV_QQ_Q(Drob a, Drob b) // �������� ������ ����������
{
	Drob result;
	result.numerator = MUL_ZZ_Z(a.numerator, b.denominator); // ������� ��������� ����� a �� ����������� ����� b
	result.denominator = MUL_ZZ_Z(a.denominator, b.numerator); // ���������� ��� �����������
	result = RED_Q_Q(result); // �������� ���������� �����
	return(result);
}
