#include "Allfunc.h"

int NZER_N_B(vector<int> a_Z) //�������� �� ���� : ���� ����� �� ����� ����, �� ��� ����� ����
{
	if ((a_Z.size() == 1) && (a_Z[0] == 0))
		return 0;
	else
		return 1;	
}	
