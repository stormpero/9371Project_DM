#include "Allfunc.h"

Drob SUB_QQ_Q(Drob f, Drob s)
{
	if (s.numerator[0] == 0 && s.numerator.size() == 1) // ���� s == 0
		return f;
	s.numerator[0] = !s.numerator[0]; // ����� ����������� ���� �������
	return ADD_QQ_Q(f, s); // �������� �-�� �������� ����� �����, �� ���������� �� ����� � ��������������� ������
	// � ���� ������� ��������������, �����������.
}

