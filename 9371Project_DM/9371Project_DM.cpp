#include "Allfunc.h"
struct Drob
{
	vector <int> numerator = { 0 };
	vector <int> denominator = { 0 };
};
vector<int> input() // ���� ����� // �������������� ��������� ����(�����������)
{
	string s; cin >> s;	
	vector <int> test(s.length());
	for (int i = 1; i < test.size(); i++)
		test[i] = s[i] - '0';
	if (s[0] == '-') test[0] = 1;
	else { test[0] = s[0] - '0';  test.insert(test.begin(), 0); }
	return test;	
}

void output(vector <int> test) // ����� ����� // �������������� ��������� ����(�����������)
{
	if (test[0] == 1) cout << "-";
	for (int i = 1; i < test.size(); i++)
		cout << test[i];
}
int main()
{
	

	//vector<int> t1 = { 1,3,5 };
	//vector<int> t2 = { 1,3,5,7 };
	//vector<int> t3(SUB_NN_N(t1, t2));
	//
	//for (int i = 0; i < t3.size(); i++)
	//	cout << t3[i];
	
	// output(input());	
}

