#include "Allfunc.h"

std::vector<int> ADD_1N_N(std::vector<int> input)
{
    // ������� ����� �������� �������
    std::vector<int> res(input);

    // ��������� ���� � ������� ������� ������ ������
    if (input.empty())
        throw "Empty input";

    // ��������� � ������ ����� 1,
    // �� ������� ���������� ��������� ������� ��������
    int mem(1);

    // � ����� ���� � ����� � ������ ������� (���� � ������ ���-�� ��������)
    for (int i(input.size() - 1); mem && i >= 0; --i)
    {
        // ���� ����� �� �������� � �������� 0-9,
        // ������ ���������� � ������������ �����
        if (input[i] < 0 || input[i] > 9)
            throw "Input is not a valid number";

        res[i] = (input[i] + mem) % 10;
        mem    = (input[i] + mem) / 10;
    }

    // ���� �������� �� ����� �������, �� ������ ��� ��� �� �����,
    // ��������� � ������ ����� ������� �� ��������� �� ������
    if (mem)
        res.insert(res.begin(), mem);

    return res;
}