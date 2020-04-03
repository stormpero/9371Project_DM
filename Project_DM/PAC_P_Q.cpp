
#include "Allfunc.h"

void PAC_P_Q(vector<Drob> poly, vector<int>& LCM_de, vector<int>& GCD_num)
{
	if (poly.empty())
		throw "Empty polynomial";

	// ������������ ���� ����������� ������� ������������ ����������
	// � ���� ��������� ������� ������������ (� ���� ������������ �����)
	LCM_de = poly[0].denominator;
	GCD_num = ABS_Z_N(poly[0].numerator);

	// � ��������������� ��������� ��� ��� � ��� � ������ ��������� ������������
	for (int i(1); i < poly.size(); ++i)
	{
		LCM_de = LCM_NN_N(LCM_de, poly[i].denominator);
		GCD_num = GCF_NN_N(GCD_num, ABS_Z_N(poly[i].numerator));
	}

	// ��������� ��� ������� � ����� �����
	GCD_num = TRANS_N_Z(GCD_num);
}