#include "Allfunc.h"

vector<int> MUL_ND_N(vector<int> entry, int number) {

	if (entry.empty()) {
		throw "Error:Empty entry";
	}


	/*short number; // ���� ����� 
	cout << "Please enter a number";
	cin >> number;*/

	if (number < 0 || number > 9)       //����� ���������� ����� ������ ������!!!!!
		throw "Entered wrong";

	short digit = 0;// ���������� ���������� �� ���������� ���������� �������

	for (int i = entry.size() - 1; i >= 0; i--) {
		short multiplication;
		multiplication = number * entry[i];   // ������������ ����� � �������


		if (multiplication + digit >= 10) {
			entry[i] = (multiplication % 10) + digit;
			digit = multiplication / 10;
		}
		else
		{
			entry[i] = (multiplication % 10) + digit;
			digit = 0;
		}
	}

	if (digit != 0) //���� ��������� ������ >= 10 �� ���������� ����� ������� � ������ �������
		entry.insert(entry.begin(), digit);

	/*for (int i = 0; i < entry.size(); i++)
		cout << entry[i];*/


	return entry;

}