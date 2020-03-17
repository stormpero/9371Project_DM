#include "Allfunc.h"
std::vector<int>  SUB_NN_N(std::vector<int> a, std::vector<int> b) // �������� ������ ����������
{
	std::vector<int> result;               // ����������, ������� ������ ��������� ���������
	if (COM_NN_D(a, b) == 2)      // 2 ���� a>b, 0 ���� a=b, 1 ���� a<b
	{
		std::vector <int> result(a.size());                         //�������� ������, ������� ������ �������� ���������, � �������� ��� ����������� �������� �����
		while (a.size() != b.size())  b.insert(b.begin(), 0); // ���� ������ b ������ �� �����������, �� ������� � ��� ������ ����
		for (int i = a.size() - 1; i >= 0; i--) // ���� ���������
		{
			result[i] = a[i] - b[i];
			if (result[i] < 0)
			{
				result[i] += 10;
				a[i - 1]--;
			}
		}
		while (result[0]==0) // ���� ����� ��������� � ������ ������� ������� ����, �� ��  ����� ������
		{

				result.erase(result.begin());

		}
	}
	if (COM_NN_D(a, b) == 0)
	{
		result[0] = 0;           // ��� ��� ����������� ����� �����, �� �� �������� ���� 0
	}
	if (COM_NN_D(a, b) == 1)
	{
		std::vector <int> result(b.size());                         //�������� ������, ������� ������ �������� ���������, � �������� ��� ����������� �������� �����
		while (a.size() != b.size())  a.insert(a.begin(), 0); // ���� ������ a ������ �� �����������, �� ������� � ��� ������ ����
		for (int i = b.size() - 1; i >= 0; i--) // ���� ���������
		{
			result[i] = b[i] - a[i];
			if (result[i] < 0)
			{
				result[i] += 10;
				b[i - 1]--;
			}
		}
		while (result[0] == 0)
		{
			result.erase(result.begin());
		}
	}
	return(result);   // ������������ �������� - ��������� ��������� ���� ����������� �����
}