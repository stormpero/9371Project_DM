#include "Allfunc.h"

vector<int> GCF_NN_N(vector<int> a, vector<int> b)
{
	while (NZER_N_B(b)) // ���� ���� b != 0
	{
		vector <int> c; //��������������� ������
		c = MOD_NN_N(a, b); // ������� �� ������� a �� b
		a = b;
		b = c;
	}
	return a;
}