#include "Allfunc.h"

Drob TRANS_Z_Q(vector <int> a) // �������������� ������ � �������
{
	Drob p;	//����� ���������
	p.numerator = a; // ����������� ����� � ���������
	p.denominator[0] = 0;// ����������� 0 � �����������
	p.denominator.push_back(1);  // ����������� 1 � �����������
	return p; // ���������� ���������
}
