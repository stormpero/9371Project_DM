#include "Allfunc.h"

int NZER_N_B(vector<int> a) //�������� �� ���� : ���� ����� �� ����� ����, �� ��� ����� ����
{
	if ((a.size() == 1) && (a[0] == 0))
		return 0;
	else
		return 1;
}	
