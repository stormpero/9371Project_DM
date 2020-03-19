#include "Allfunc.h"

vector <int>SUB_NDN_N(vector<int> a, vector<int> b, int k)
{
	vector<int> tempb = MUL_ND_N(b, k);// save result of b * k (��� ����, ����� �� ������� ��� 2 ����)
	vector<int> null = { 0 };

	if (COM_NN_D(tempb, a) == 2) // ���� b * k > a �� ��������� = b*k - a, ���� b * k = a(��� �������� ������ � ��� ������ ����� a = b = 0), �� ��������� = b*k - a = a*k - b = 0
		return SUB_NN_N(tempb, a);
	else if ((k == 0) && (b == null) || ((k == 0) && (a == null)) || ((a == null) && (b == null))) return null; // ����� ��������� = b*k - a,      ( ���� b * k = a(��� �������� ������ � ��� ������ ����� a = b = 0), �� ��������� = b*k - a = a*k - b = 0 )
	else throw "wrong number"; // if k == 0 and b != 0 and a != 0, then ak - b < 0 and bk - a < 0
}