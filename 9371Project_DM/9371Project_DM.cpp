#include "Allfunc.h"
#include "natural.h"
#include "integer.h"
#include "rational.h"
#include "polynomial.h"

vector<int> input() // ���� ����� 
{
	string s; cin >> s;	
	vector <int> test(s.length());
	for (int i = 1; i < test.size(); i++)
		test[i] = s[i] - '0';
	if (s[0] == '-') test[0] = 1;
	else { test[0] = s[0] - '0';  test.insert(test.begin(), 0); }
	return test;	
}		

void output(vector <int> test) // ����� ����� 
{
	if (test[0] == 1) cout << "-";
	for (int i = 1; i < test.size(); i++)
		cout << test[i];
}
int main()
{
	//vector<int> t2 = { 5,0 }; // ���� �����, ������� ������ ������� � ���������
	vector<int> t3 = { 2,5 };
	//t3 = GCF_NN_N(t2, t3);

	//vector <int> sd(input());
	vector<int> result;
	result.push_back(0);
	/*vector <int> sd(ABS_Z_N(t3));
	for (int i = 0; i < sd.size(); i++)
		cout << sd[i];	 */  	
	//Drob x = TRANS_Z_Q(t2);// ������� ������ �� ������� � ����� ������
	//for (int i = 0; i < x.numerator.size(); i++)// ����� ���������
	//	cout << x.numerator[i];
	//cout << endl;
	//for (int i = 0; i < x.denominator.size(); i++)// ����� �����������
	//	cout << x.denominator[i];
	
	/*vector<int> t2 = { 1,3,5,7 };
	vector<int> t1 = { 1,3,5,7 };
	t1 = SUB_NN_N(t2, t1);*/

	//vector <Drob> test;
	//test[0].numerator[0] = 1;	
	//vector<int> t2 = { 1,3,5,7 };
	//vector<int> t3;
	//vector<int> t1 = { 0,3,5 };
	//for (int i = 0; i < t3.size(); i++)
	//	cout << t3[i];
	//
	// output(input());	
}

