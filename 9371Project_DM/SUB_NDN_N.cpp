#include "Allfunc.h"

vector <int>SUB_NDN_N(vector<int> a, vector<int> b, int k)
{
	vector<int> bk = MUL_ND_N(b, k);// save result of b * k (��� ����, ����� �� ������� ��� 2 ����)
	vector<int> ak = MUL_ND_N(a, k);
	short abk = COM_NN_D(a, bk);
	short bak = COM_NN_D(b, ak);

	if (abk == 2 || abk == 0) // ���� a > bk ��� a = bk, result = a - bk
		return SUB_NN_N(a, bk);
	else if (bak == 2 || bak == 0)// ���� b > ak ��� b = ak, result = b - ak
		return SUB_NN_N(b, ak);
	else throw "Wrong input"; // �����
}