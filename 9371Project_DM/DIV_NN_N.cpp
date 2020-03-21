
#include "Allfunc.h"

vector<int> DIV_NN_N(vector<int> first, vector<int> second)
{
	// ��������� ���� � ������� ������� ������ ������
	if (first.empty() || second.empty())
		throw "Empty input";

	vector<int> result{ 0 }, k{ 0 };
	int i(0);
	// ���� ������ ����� >= �������
	while (COM_NN_D(first, second) == 2 || !COM_NN_D(first, second))
	{
		// ��������� ������ ����� ������� first �� second
		// ���������� �� 10 � ������� �� �������
		vector<int> temp(DIV_NN_Dk(first, second));

		// ���������� ��� ����� � result
		result = ADD_NN_N(result, temp);

		// ������ �������� ��� ����� �� ��������
		temp = MUL_NN_N(temp, second);

		// � �������� ������������ �� ��������
		first = SUB_NN_N(first, temp);

		++i;
	}

	return result;
}