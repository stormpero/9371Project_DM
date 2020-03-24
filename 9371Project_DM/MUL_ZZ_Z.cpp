#include "Allfunc.h"

vector<int> MUL_ZZ_Z(vector<int> a, vector<int> b) // �������� ������ ����������
{
	vector<int> result; // ����������, ������� ������ ��������� ���������
	if (POZ_Z_D(a) == 0 || POZ_Z_D(b) == 0) //  ���� ���� �� ����� ����� 0, �� �� ������������ ���� ����� 0
		result.push_back(0);
	else
	{
		result = MUL_NN_N(ABS_Z_N(a), ABS_Z_N(b)); // ��������� ����� � ����������� � �������� ���������
		result = TRANS_N_Z(result); // ��������� ����������� � �����
		if (POZ_Z_D(a) != POZ_Z_D(b)) //�������� ����� �� ����� �����, ���� ���, �� �������� ����
			result = MUL_ZM_Z(result); // ������� ����� �� -1
	}
	return(result);   // ������������ ��������
}
