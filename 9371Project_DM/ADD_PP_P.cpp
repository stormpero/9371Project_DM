#include "Allfunc.h"

vector<Drob> ADD_PP_P(vector<Drob> a, vector<Drob> b) // �������� �.�.
{

	// ������� ������� �����
	Drob null{ vector<int> {0}, vector<int> {1} };
	// � ������������ �������� �������� �����������
	int sizedif(a.size() - b.size());

	// ���� ������ ������ �������, ��������� ��� ������ �����
	if (sizedif < 0)
		a.insert(a.begin, -sizedif, null);

	// ���� ������ ������ �������, ��������� ��� ������ �����
	else if (sizedif > 0)
		b.insert(a.begin, sizedif, null);

	// ��������������� ������� �����
	// ��������������� ������������� �����������
	vector<Drob> result;
	for (int i(0); i < a.size(); ++i)
		result.push_back(ADD_QQ_Q(a[i], b[i]));

	return result;
}