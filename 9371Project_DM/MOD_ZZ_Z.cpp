#include "Allfunc.h"	

vector<int>  MOD_ZZ_Z(vector<int> a, vector<int> b) // �������� ������ ����������
{
	vector<int> q; // �������
	vector<int> aq_or_bq; // ��������, ������� ������ ������������ �������� ����� �� �������
		vector<int> result; // ����������, ������� ������ ��������� 
	q = DIV_ZZ_Z(a, b); // ������� �� ������� ����� � b 
	if (COM_NN_D(a, b) == 2) // ���� �, ������ b
	{
		aq_or_bq = MUL_ZZ_Z(b, q); // �� ����� ����� ��� ������� ���������� �� ������� �� 
		result = SUB_ZZ_Z(a, aq_or_bq); // �������� ����� ����� �� a
	}
	else
		if (COM_NN_D(a, b) == 1)
		{
			aq_or_bq = MUL_ZZ_Z(a, q);
			result = SUB_ZZ_Z(b, aq_or_bq);
		}

	return(result);   // ������������ ��������
}
