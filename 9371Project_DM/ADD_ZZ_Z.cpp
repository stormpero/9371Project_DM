#include "Allfunc.h"

vector<int> ADD_ZZ_Z(vector<int> num1, vector<int> num2) // ������� ������
{
	vector<int> result; // ����������, ������� ������ ��������� ��������
	if ((POZ_Z_D(num1) == 0 && POZ_Z_D(num2) == 0) || ((COM_NN_D(ABS_Z_N(num1), ABS_Z_N(num2)) == 0) && (POZ_Z_D(num1) != POZ_Z_D(num2)))) //  ���� ��� ������ ����� 0 ��� �� ������ ����, �� ����� ������� �����, �� �� ����� 0
		result.push_back(0);
	else
	{
		if (POZ_Z_D(num1) == POZ_Z_D(num2))//�������� ����� �� ����� �����, ���� ��, �� ���������
		{
			result = ADD_NN_N(ABS_Z_N(num1), ABS_Z_N(num2));
				if (POZ_Z_D(num1) == 1)//���� ���� ���� ������������ ������ ���� (�.�. ����� ������ ����� ���������� ��������� ����)
					result = MUL_ZM_Z(result); // ������� ����� �� -1
		}
		else
		{
			if (COM_NN_D(ABS_Z_N(num1), ABS_Z_N(num2)) == 2)//��������� ����� �� ����� ������
			{
				if (POZ_Z_D(num1) == 1)
				{
					result = ADD_NN_N(ABS_Z_N(num1), ABS_Z_N(num2));//ec�� ������ �������������,�� �������� �� �������� ����� ������� � ������ ��� ����
						result = MUL_ZM_Z(result); // ������� ����� �� -1
				}
				else
				{
					result = ADD_NN_N(ABS_Z_N(num1), ABS_Z_N(num2));//ec�� ������ �������������, �� �������� �� �������� ����� �������
				}
			}
			else
			{
				if (POZ_Z_D(num2) == 1)
				{
					result = ADD_NN_N(ABS_Z_N(num2), ABS_Z_N(num1));//ec�� ������ �������������,�� �������� �� �������� ����� ������� � ������ ��� ����
						result = MUL_ZM_Z(result); // ������� ����� �� -1
				}
				else
				{
					result = ADD_NN_N(ABS_Z_N(num2), ABS_Z_N(num1));//ec�� ������ �������������, �� �������� �� �������� ����� �������
				}
			}
		}
	}
	return(result);   // ������������ ��������
}


