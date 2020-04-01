#include "Allfunc.h"

vector<vector<int>> MAT_Q_MUL(vector<vector<int>> a, vector<vector<int>> b)
{
	int k = 0, row;
	row = b.size();
	vector<vector<int>> c(row);//��������� ��������� ������,� ������� ����� ��������� ��������� ���������

	for (int i = 0; i < row; i++)
	{
		c[i].resize(row);
		for (int j = 0; j < row; j++)
		{
			for (int z = 0; z < row; z++)
			{
				k += a[i][z] * b[z][j];
			}

			c[i][j] = k; //����������� �������� ���������
			k = 0;
		}
	}

	return(c);//���������� ������� ����������
}
