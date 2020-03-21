#include "Allfunc.h"


vector<int> DIV_NN_Dk(vector<int> vector_1, vector<int> vector_2) {

	if (vector_1.empty() || vector_2.empty()) //�������� �� ������
		throw "Empty input";



	if (COM_NN_D(vector_1, vector_2) == 1) { //���� 1� ������ < 2��
		vector<int> number = { 0 };
		return number;
	}

	if (COM_NN_D(vector_1, vector_2) == 0) { //���� ������� �����
		vector<int> number = { 1 };
		return number;
	}



	if (COM_NN_D(vector_1, vector_2) == 2) {      //���� 2� ������ 1��


		vector<int> number = { 0 };               //��� ����� ����� ����� ��� ������� 2�� �� 1�

		while (COM_NN_D(vector_1, vector_2) == 2 ) { //����� ���� ������� ������ � ����������� ������� �����, ��� ��� ����� ������� �� ���������� // �� $$$$$
			vector <int> a = vector_1, b = vector_2;
			vector <int> result(a.size());                         //�������� ������, ������� ������ �������� ���������, � �������� ��� ����������� �������� �����
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
			while (result[0] == 0) // ���� ����� ��������� � ������ ������� ������� ����, �� ��  ����� ������
			{

				result.erase(result.begin());

			}//$$$$$$$$

			while (b[0] == 0) // � ��� ��� ����������: ���� ����� ��������� � ������ ������� ������� ����, �� ��  ����� ������ 
			{

				b.erase(b.begin());

			}

			number = ADD_1N_N(number); // ����������� �����
			vector_1 = result;
		}

		if (COM_NN_D(vector_1, vector_2) == 0) // ���� ������� ������, �� ����������� ������ ��� �� 1��
			number = ADD_1N_N(number);



		for (int i = 1; i < number.size(); i++) { //��� ��� �� ������� �� 1� �������� ����� �� ��������� �������� ������

			number[i] = 0;
		}



		/*for (int i = 0; i < number.size(); i++)
			cout << number[i];*/                       //����� ������� ��� ���������


		return number;
	}



}