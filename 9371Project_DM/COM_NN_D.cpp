#include "Allfunc.h"

int COM_NN_D(vector<int> num1, vector<int> num2)
{
	int s = 0;
	if (num1.size() == num2.size())  //���� � ����� ���������� ����-�� ��������
	{
		for (int i = 0; i < num1.size(); i++)//���������� ������ ����� � �����������
		{
			s = 0;
			if (num1[i] == num2[i])
				s = 1; //������� �����
			if (s != 1) //���� ������ �� �����, �� ������� ����� �� ��� ������
			{
				if (num1[i] > num2[i])
					return 2;
				if (num1[i] < num2[i])
					return 1;
				break;
			}
		}
	}

	if (s == 1) //������ ������� �����
		return 0;

	if (num1.size() < num2.size())
		return 1;

	if (num1.size() > num2.size())
		return 2;
}