#include "Allfunc.h"

//����� �����

//vector <int> remains = { 0 };
//vector <int> num;
//vector <int> null = { 0 };
//short quotient;
//// ���������� ������� ����� first � second � ������� � ����� ������� ������� �������� �������.
//int i = 0;
//while ((i < first.size()) && ((second.size() + i) <= first.size()) || ((remains != null) && ((remains.size() + i) <= first.size())))
//{
//	if (remains == null) // ���� �������� ����� ����
//	{
//		num.reserve(second.size()); // ������� ������ ��������� ����� ��������, �����, ����� ���������� ����� �������� �� ��������. (���-�� �������� ����� ����� ������ ��������� ��� ��������� �� ���� ����� �������� ��������)
//		for (; i < second.size; i++)
//			num[i] = first[i];
//	}
//	else // �����
//	{
//		num.reserve(remains.size()); // ���� ������� �� ����� ����
//		for (int j = 0; j < remains.size; j++) //������� ������� � ������� � ���� ����� �� �������� �������, ����� ����� �������� ��������� ����� �������� ��������
//			num[j] = remains[j];
//		while (num.size() != second.size())
//		{
//			num.push_back(first[i]);
//			i++;
//		}
//	}
//	if ((COM_NN_D(num, second) == 1)) // ���� ���������� ����� ���������� ������ ��������, ����� ��������� � ���� ��� ���� ������ �� ��������(�� ������� ������� ��������, ��� ������� �������� ������ ������ ��������)
//		if ((1 + i) <= first.size())// � ����� ������ ��� ����� ����� ������������� �������� �� ��������
//			num.push_back(first[i++]);
//		else return num; // ���� �������� � �������� �� ��������, ����� ������������ ����� � ���� ������� �� �������

//	remains = SUB_NDN_N(num, second, (DIV_NN_N(num, second))[0]); // ������� ������� ������� �����, ������� �� �������� ���� �� ��������, ����� ��������� �� �� ����� ��������, �� ��� ��� ���� � �������� �� ���������� �����
//	num.clear();
//}
//if (i < first.size())
//{
//	remains.clear();
//	remains.reserve(first.size() - i);
//	for (int j = 0; j < remains.size(); j++)
//		remains[i] = first[i];
//}
//return remains;