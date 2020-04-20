#include "polynomial.h"

///////////////////////////////////////////////////////////////////////////////////////////////     ������������� ���������     //

int DEG_P_N(vector <Drob> a)
{
	return a.size() - 1;
}

vector<Drob> GCF_PP_P(vector<Drob> fir, vector<Drob> sec) // ������
{	
	vector <Drob> temp;
	if (DEG_P_N(sec) > DEG_P_N(fir))
		swap(fir, sec);
	temp = MOD_PP_P(fir, sec);
	//else if (DEG_P_N(fir) == DEG_P_N(sec)) 
	//{
	//	Drob drop = SUB_QQ_Q(fir[DEG_P_N(fir)], sec[DEG_P_N(sec)]);
	//	if (drop.numerator[0] == 1) 
	//		swap(num1, num2);
	//}
	//while (num2 != null) // ���� ���� b != 0
	//{
	//	vector <Drob> c; //��������������� ������
	//	c = MOD_PP_P(num1, num2); // ������� �� ������� a �� b
	//	num1 = num2;
	//	num2 = c;
	//}

	while (temp.size() != 1 || POZ_Z_D(temp[0].numerator) != 0)
	{
		fir = sec;
		sec = temp;
		temp = MOD_PP_P(fir, sec);
	}
	return sec;	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     ������ ���������     //

vector <Drob> MUL_Pxk_P(vector<Drob> poly, vector<int> k)
{
	vector<Drob> result(poly);

	for (vector<int> i{ 0 }; COM_NN_D(i, k) == 1; i = ADD_1N_N(i))
	{
		// �������� ������������ ������ k ���,
		// � ��������� ������������ ��������� ������
		Drob zero{ vector<int> {0, 0}, vector<int> {1} };
		result.insert(result.begin(), zero);
	}

	return result;
}

void FAC_P_Q(vector<Drob> poly, vector<int>& LCM_de, vector<int>& GCD_num)
{
	if (poly.empty())
		throw "Empty polynomial";

	// � ���� ��������� ������� ������������ (� ���� ������������ �����)
	// ������������ ���� ����������� ������� ������������ ����������
	GCD_num = ABS_Z_N(poly[0].numerator);
	LCM_de = poly[0].denominator;

	// � ��������������� ��������� ��� ��� � ��� � ������ ��������� ������������
	for (int i(1); i < poly.size(); ++i)
	{
		GCD_num = GCF_NN_N(GCD_num, ABS_Z_N(poly[i].numerator));
		LCM_de = LCM_NN_N(LCM_de, poly[i].denominator);
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
	Drob null{ vector<int> {0, 0}, vector<int> {1} };
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
	for (int i(0); i < first.size(); i++)
		result.push_back(SUB_QQ_Q(first[i], second[i]));
	for (int i = result.size() - 1; (POZ_Z_D(result[i].numerator) == 0) && i != 0; i--)
	{
		result.pop_back();
	}
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
	return polynominal[polynominal.size() - 1]; //���������� ��������� ���������
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� ������     //

vector<Drob> ADD_PP_P(vector<Drob> a, vector<Drob> b)
{

	// ������� ������� �����
	Drob null{ vector<int> {0, 0}, vector<int> {1} };
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
	for (int i(0); i < a.size(); i++)
		result.push_back(ADD_QQ_Q(a[i], b[i]));

	return result;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     ������� ������      //

vector <Drob> MUL_PP_P(vector <Drob> f, vector <Drob> s) 
{
	vector <Drob> result;
	result = MUL_PQ_P(f, s[0]); // �������� ������ ��������� �� ��������� ���� �������


	vector <int> ssize;
	int n = s.size();
	while (n != 0)              // ����� �������. ��� ��� MUL_Pxk_P �� ���� ��������� ��������� � ������, � s.size() ��� ������ ����� ���� int. ������� �������� ��������������� int � vector <int>
	{
		ssize.push_back(n % 10);
		n /= 10;
	}
	for (int i = 0; i < ssize.size() / 2; i++)
	{
		swap(ssize[i], ssize[ssize.size() - 1 - i]);
	}
	int kk = 1;
	for (vector <int> k = { 1 }; k != ssize; k = ADD_1N_N(k)) // �������� ������ ��������� �� x^k ������� ���������� � ���������� ������������ � ���������� �� ��� ��� ���� ���������� �� ��������
	{		
		if (POZ_Z_D(s[kk].numerator) != 0) // ��� ������� ����� ���� �����������, ����� ����� �� ����������� �������� ���� ��������� �� x^k, ����� ����������� ����� x^k ����� ����
			result = ADD_PP_P(result, MUL_PQ_P(MUL_Pxk_P(f, k), s[kk]));
		kk++;
	}
	return result;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     ����� ��������      //

vector<Drob> MUL_PQ_P(vector<Drob> polynomial, Drob fraction)
{
	for (int i = polynomial.size() - 1; i >= 0; i--) // ���� ���������
		polynomial[i] = MUL_QQ_Q(polynomial[i], fraction);
	return (polynomial);
}

vector<Drob> DER_P_P(vector<Drob> polynomial)
{
	Drob i;	//�������� �� ������� (��� a/1)
	i.numerator.push_back(0);
	i.denominator.push_back(1);
	polynomial.erase(polynomial.begin());//������ ��������� ���� �� 0
	for(int k = polynomial.size() - 1; k >= 0; k--)
	{
		for (int size = k; size > 0; size--)
			i.numerator = ADD_1N_N(i.numerator);
		i.numerator = ADD_1N_N(i.numerator);
		i.numerator.insert(i.numerator.begin(), 0);
		polynomial[k] = MUL_QQ_Q(polynomial[k], i);
		i.numerator.resize(1);
		i.denominator.resize(1);
		i.numerator[0] = 0;
		i.denominator[0] = 1;
	}
	return (polynomial);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� ����      //

vector<Drob> NMR_P_P(vector<Drob> polynomial)
{
	vector<Drob> pr = DER_P_P(polynomial);
	vector <Drob> nod = GCF_PP_P(polynomial, pr);
	if ((nod[0].numerator[0] == 1) && (nod[0].denominator[0] == 1)) 
		polynomial = DIV_PP_P(polynomial, pr);
	
	return polynomial;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////     �������� �����      //

vector<Drob> DIV_PP_P(vector<Drob> a, vector<Drob> b) 
{
	if (DEG_P_N(b) > DEG_P_N(a))
		swap(a, b);

	Drob number;
	vector <Drob> div_a_b;
	div_a_b.resize(a.size() - b.size() + 1);
	for (int i = 0; i < div_a_b.size(); i++)
	{
		div_a_b[i].numerator.push_back(0);
		div_a_b[i].numerator.push_back(0);
		div_a_b[i].denominator.push_back(1);
	}

	int i = 0;
	while (DEG_P_N(a) >= DEG_P_N(b) && !(a.size() == 1 && POZ_Z_D(a[0].numerator) == 0))
	{
		number = DIV_QQ_Q(a[a.size() - 1], b[b.size() - 1]);
		div_a_b[div_a_b.size() - 1 - i] = number;
		vector <int> vect = { 0 };

		for (int j = 0; j < div_a_b.size() - 1 - i; j++)
			vect = ADD_1N_N(vect);

		a = SUB_PP_P(a, MUL_PQ_P(MUL_Pxk_P(b, vect), number));
		i++;
	}
	return div_a_b;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
