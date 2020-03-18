#include "Allfunc.h"

vector <int>MUL_Nk_N(vector<int> N, vector<int> k)
{
	// ��������� ���� � ������� ������� ������ ������
	if (N.empty() || k.empty())
		throw "Empty input";
	//��������� ����� �������� ������ ���� ������������ �������
	//�� ��� ��� ���� i �� ����� k ���������� � ����� ����� 0, ��� ������������ ��������� �� 10
	for (vector <int>i(0); i != k; i = ADD_1N_N(i))
		N.push_back(0);
	return N;
}