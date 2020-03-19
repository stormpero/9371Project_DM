#include "Allfunc.h"

vector <int>SUB_NDN_N(vector<int> a, vector<int> b, int k)
{
	vector<int> tempb = MUL_ND_N(b, k);// save result of b * k (��� ����, ����� �� ������� ��� 2 ����)

	if (COM_NN_D(tempb, a) == 2) // ���� b * k > a �� ��������� = b*k - a, ���� b * k = a(��� �������� ������ � ��� ������ ����� a = b = 0), �� ��������� = b*k - a = a*k - b = 0
		return SUB_NN_N(tempb, a);
	else return SUB_NN_N(MUL_ND_N(a, k), b);// ����� ��������� = b*k - a,                     ( ���� b * k = a(��� �������� ������ � ��� ������ ����� a = b = 0), �� ��������� = b*k - a = a*k - b = 0 )
}