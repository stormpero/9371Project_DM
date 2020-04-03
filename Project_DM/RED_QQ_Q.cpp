#include "Allfunc.h"
#include "integer.h"

Drob RED_Q_Q(Drob a)
{
	vector <int> one = { 1 }; 
	vector <int> num = ABS_Z_N(a.numerator); // �������� ���������� �������� ���������
	vector <int> dem = ABS_Z_N(a.denominator);// �������� ���������� �������� �����������
	vector <int> NOD = GCF_NN_N(num, dem);//������� ��� �����
	while (NOD != one) {//���� ��� �� ������ ����� �������

		num = DIV_ZZ_Z(num, NOD);// �������� ������� �� ������� ��������� �� ���
		dem = DIV_ZZ_Z(dem, NOD);// �������� ������� �� ������� ����������� �� ���
		NOD = GCF_NN_N(num, dem);//������� ��� ������� �����

	};
	if (a.numerator[0] == 0) {
		num.insert(num.begin(), 0);
	}
	else {
		num.insert(num.begin(), 1);
	}
	if (a.denominator[0] == 0) {
		dem.insert(dem.begin(), 0);
	}
	else {
		dem.insert(dem.begin(), 1);
	}
	a.numerator = num;
	a.denominator = dem;
	return(a);//���������� ����������� �����

};