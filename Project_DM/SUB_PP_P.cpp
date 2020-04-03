
#include "Allfunc.h"

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
		first.insert(first.begin, -sizedif, null);

	// ���� ������ ������ �������, ��������� ��� ������ �����
	else if (sizedif > 0)
		second.insert(first.begin, sizedif, null);

	// ��������������� ������� ��������
	// ��������������� ������������� �����������
	vector<Drob> result;
	for (int i(0); i < first.size(); ++i)
		result.push_back(SUB_QQ_Q(first[i], second[i]));

	return result;
}