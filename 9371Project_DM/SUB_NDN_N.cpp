#include "Allfunc.h"

vector <int>SUB_NDN_N(vector<int> a, vector<int> b, int k)
{
	vector<int> tempb = MUL_ND_N(b, k);// save result of b * k (��� ����, ����� �� ������� ��� 2 ����)
	vector<int> null = { 0 };

	if (COM_NN_D(tempb, a) == 2) // ���� bk > a, �� result = bk - a
		return SUB_NN_N(tempb, a);
	else if (k != 0) //����� ���� k != 0, �� result = ak - b  (����� �� ����� ������, ����� ak=b � bk=a, ��� k != 0 ����� ��������, ����� a = b = 0, ��� a = b = k = 1   =>  result = ak - b)
		return SUB_NN_N(MUL_ND_N(a, k), b);
	else if ((k == 0) && (b == null) || ((k == 0) && (a == null))) return null; // ���� k = 0, ��       ak - b <= 0    �   bk - a <= 0      ��� ���� ������ ���� ���� �� ���� ��������� ����� ������ ���� a = 0 ��� b = 0
	else throw "wrong number";  // ����� ���������������� ���������� ���
}