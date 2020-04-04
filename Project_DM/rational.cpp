#include "rational.h"


///////////////////////////////////////////////////////////////////////////////////////////////     ������� ������     //

Drob SUB_QQ_Q(Drob f, Drob s)
{
	if (s.numerator[0] == 0 && s.numerator.size() == 1) // ���� s == 0
		return f;
	s.numerator[0] = !s.numerator[0]; // ����� ����������� ���� �������
	return ADD_QQ_Q(f, s); // �������� �-�� �������� ����� �����, �� ���������� �� ����� � ��������������� ������
	// � ���� ������� ��������������, �����������.
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� ������     //

int INT_Q_B(Drob a)
{
	a = RED_Q_Q(a); //�������� ���������� �����
	if (a.denominator[1] == 1)  // ��������, �������� �� ��� ������ ������� �������� � �����������
		return 1; // ���� ��, �� ������� �������
	else
		return 0; // ���� ���, �� ����
}

Drob DIV_QQ_Q(Drob a, Drob b)
{
	Drob result;
	result.numerator = MUL_ZZ_Z(a.numerator, b.denominator); // ������� ��������� ����� a �� ����������� ����� b
	result.denominator = MUL_ZZ_Z(a.denominator, b.numerator); // ���������� ��� �����������
	result = RED_Q_Q(result); // �������� ���������� �����
	return(result);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     ������� ������      //

Drob MUL_QQ_Q(Drob num1, Drob num2)
{
	Drob result;	//��������� ������
	result.numerator = MUL_ZZ_Z(num1.numerator, num2.numerator); //������������ ������������ ����������
	result.denominator = MUL_NN_N(num1.denominator, num2.denominator);  // ������������ ������������ ������������
	result = RED_Q_Q(result);
	return result; //���������� �������� ���������
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� ����      //

Drob ADD_QQ_Q(Drob a, Drob b)
{
	Drob res;
	vector<int> zn1 = ABS_Z_N(a.denominator);
	vector<int> zn2 = b.denominator;
	vector <int> zn = LCM_NN_N(zn1, zn2);
	vector <int> mn = DIV_ZZ_Z(zn, zn1);
	vector <int> chisl1 = MUL_ZZ_Z(a.numerator, mn);
	vector <int> mn1 = DIV_ZZ_Z(zn, zn2);
	vector <int> chisl2 = MUL_ZZ_Z(b.numerator, mn1);
	res.numerator = ADD_ZZ_Z(chisl1, chisl2);
	res.denominator = zn;
	return res;
}

vector<int> TRANS_Q_Z(Drob a)
{
	vector<int>r = a.numerator;
	return r;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� �����      //

Drob TRANS_Z_Q(vector <int> a) 
{
	Drob p;	//����� ���������
	p.numerator = a; // ����������� ����� � ���������
	p.denominator[0] = 0;// ����������� 0 � �����������
	p.denominator.push_back(1);  // ����������� 1 � �����������
	return p; // ���������� ���������
}

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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////