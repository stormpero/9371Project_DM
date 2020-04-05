#include "polynomial.h"

///////////////////////////////////////////////////////////////////////////////////////////////     ������������� ���������     //

int DEG_P_N(vector <Drob> a)
{
	return a.size() - 1;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     ������ ���������     //

vector<Drob> MUL_Pxk_P(vector<Drob> poly, vector<int> k)
{
	vector<Drob> result(poly);

	for (vector<int> i{ 0 }; COM_NN_D(i, k) == 1; i = ADD_1N_N(i))
	{
		// �������� ������������ ������ k ���,
		// � ��������� ������������ ��������� ������
		Drob zero{ vector<int> {0}, vector<int> {1} };
		result.push_back(zero);
	}

	return result;
}

void FAC_P_Q(vector<Drob> poly, vector<int>& LCM_de, vector<int>& GCD_num)
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

vector<Drob> SUB_PP_P(vector<Drob> first, vector<Drob> second)
{
	// �������� �� ������ ����
	if (first.empty() || second.empty())
		throw "Empty input";

	// ������� ������� �����
	Drob null{ vector<int> {0}, vector<int> {1} };
	// � ������������ �������� �������� �����������
	int sizedif(first.size() - second.size());

	// ���� ������ ������ �������, ��������� ��� ������ �����
	if (sizedif < 0)
		first.insert(first.begin(), -sizedif, null);

	// ���� ������ ������ �������, ��������� ��� ������ �����
	else if (sizedif > 0)
		second.insert(first.begin(), sizedif, null);

	// ��������������� ������� ��������
	// ��������������� ������������� �����������
	vector<Drob> result;
	for (int i(0); i < first.size(); ++i)
		result.push_back(SUB_QQ_Q(first[i], second[i]));

	return result;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     ������� ������     //

vector <Drob> MOD_PP_P(vector <Drob> f, vector <Drob> s)
{
	return SUB_PP_P(f, MUL_PP_P(DIV_PP_P(f, s), s)); // ������� �������� ����� ����� ������� f �� s, ����� �������� ��������� �� �������� (�. � s). ��, ��� � ���������� ����������, �������� �� �������� (�. � f)	
}

Drob LED_P_Q(vector <Drob> polynominal)
{
	if (polynominal.empty())
		throw "Wrong input";
	return polynominal[polynominal.size() - 1]; //���������� ����� ������ ���������
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� ������     //

vector<Drob> ADD_PP_P(vector<Drob> a, vector<Drob> b)
{

	// ������� ������� �����
	Drob null{ vector<int> {0}, vector<int> {1} };
	// � ������������ �������� �������� �����������
	int sizedif(a.size() - b.size());

	// ���� ������ ������ �������, ��������� ��� ������ �����
	if (sizedif < 0)
		a.insert(a.begin(), -sizedif, null);

	// ���� ������ ������ �������, ��������� ��� ������ �����
	else if (sizedif > 0)
		b.insert(a.begin(), sizedif, null);

	// ��������������� ������� �����
	// ��������������� ������������� �����������
	vector<Drob> result;
	for (int i(0); i < a.size(); ++i)
		result.push_back(ADD_QQ_Q(a[i], b[i]));

	return result;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     ������� ������      //



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     ����� ��������      //

vector<Drob> MUL_PQ_P(vector<Drob> polynomial, Drob fraction)
{
	for (int i = polynomial.size() - 1; i >= 0; i--) // ���� ���������
		polynomial[i] = MUL_QQ_Q(polynomial[i], fraction);
	return (polynomial);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� ����      //



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� �����      //

vector<Drob> DIV_PP_P(vector<Drob> a, vector<Drob> b) 
{
	vector<Drob> old, jun, newe, result, priv;
	vector<int> xk;
	Drob k;
	int i;
	if (DEG_P_N(a) > DEG_P_N(b)) { //  ���������� ������� ���������� � � ���������� �.� ��� ������� ������, ��� ����� �������, ��������� � ������� �������� ����� ���������
		old = a;
		jun = b;
	}
	else
	{
		old = b;
		jun = a;
	};
	k = jun[jun.size() - 1];//������� ����������� ����������-��������

	i = (old.size() - jun.size());//����������� ������ ��������
	while (DEG_P_N(old) >= DEG_P_N(jun))//���� ������� �������� ���������� ������ ������� ��������
	{
		xk[0] = (old.size() - jun.size());//������� k ��� x^k
		newe = MUL_Pxk_P(jun, xk);//�������� ������� ��������� �� x^k
		result = MUL_PQ_P(newe, old[old.size() - 1]);//�������� ���������� ������ �� ������� ����������� �������� ����������
		priv[i] = old[old.size() - 1];//������� ������� ����������� �������� � ������
		i--;
		if ((((k.numerator[0] == 0 && k.denominator[0] == 0) || (k.numerator[0] == 1 && k.denominator[0] == 1)) && ((old[old.size() - 1].numerator[0] == 0 && old[old.size() - 1].denominator[0] == 0) || (old[old.size() - 1].numerator[0] == 1 && old[old.size() - 1].denominator[0] == 1))) || (((k.numerator[0] == 0 && k.denominator[0] == 1) || (k.numerator[0] == 1 && k.denominator[0] == 0)) && ((old[old.size() - 1].numerator[0] == 0 && old[old.size() - 1].denominator[0] == 1) || (old[old.size() - 1].numerator[0] == 1 && old[old.size() - 1].denominator[0] == 0))))//������� �����������,����� �� ���������� ��� �������� ����������
		{
			old = SUB_PP_P(old, result);
		}
		else {
			old = ADD_PP_P(old, result);
		}
		old.pop_back();
	};

	return(priv);
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
