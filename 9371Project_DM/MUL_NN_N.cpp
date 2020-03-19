
#include "Allfunc.h"

vector<int> MUL_NN_N(vector<int> first, vector<int> second)
{
    // ��������� ���� � ������� ������� ������ ������
    if (first.empty() || second.empty())
        throw "Empty input";

    // ������� ������� �� ����� ������ ������
    if (first.size() < second.size())
    {
        vector<int> temp(first);
        first = second;
        second = temp;
    }

    vector<int> result{ 0 }, k{ 0 };
    for (int i(second.size() - 1); i >= 0; --i, k = ADD_1N_N(k))
    {
        // ����������� ������ ������ �� ������ ����� �������
        vector<int> addition(MUL_ND_N(first, second[i]));

        // �������� ����� �� 1 ������ ����� (��� � ��������� � �������)
        addition = MUL_Nk_N(addition, k);

        // ���������� ��� ��� ����� � ���������� � ���������
        result = ADD_NN_N(result, addition);
    }

    return result;
}