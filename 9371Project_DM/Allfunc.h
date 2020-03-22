#pragma once
#include <iostream>
#include <vector>
using namespace std;

struct Drob
{
	vector <int> numerator = { 0 };
	vector <int> denominator = { 0 };
};

////////////////////////////////////////////////////////////Натуральные числа////////////////////////////////////////////////////////////

int NZER_N_B(vector<int> a_Z);  // Проверка на ноль: если число не равно нулю, то «да» иначе «нет» //Старосельский Александр 

vector<int> ADD_1N_N(vector<int> input);  // Добавление 1 к натуральному числу //Михаил Киришский

vector <int>MUL_Nk_N(vector<int> N, vector<int> k); //Умножить натуральное число на 10^k // Чиганов Даниил 

vector <int>SUB_NDN_N(vector<int> a, vector<int> b, int k); //Вычитание из натурального другого натурального, умноженного на цифру для случая с неотрицательным результатом

vector <int>MOD_NN_N(vector<int> a, vector<int> b); //Остаток от деления большего натурального числа на меньшее или равное натуральное с остатком(делитель отличен от нуля)

vector<int>  SUB_NN_N(vector<int> a, vector<int> b);  // Вычитание из первого большего натурального числа второго меньшего или равного // Ермольев Максим Викторович

int COM_NN_D(vector<int> num1, vector<int> num2); //Сравнение натуральных чисел: 2 - если первое больше второго, 0, если равно, 1 иначе. // Астахов Михаил 

vector<int> DIV_NN_Dk(vector<int> vector_1, vector<int> vector_2); //Вычисление первой цифры деления большего натурального на меньшее, домноженное на 10^k,где k - номер позиции этой цифры (номер считается с нуля) // Игорян

vector<int> TRANS_N_Z(vector<int> input);//Преобразование натурального числа в целое//Табояков Иван

vector<int> ADD_NN_N(vector<int> a, vector<int> b);//Сложение натуральных чисел//Жиренкин Артем

vector<int> MUL_NN_N(vector<int> first, vector<int> second); // Перемножение натуральных чисел // Михаил Киришский

vector<int> DIV_NN_N(vector<int> first, vector<int> second); // Кратное от деления 2 натуральных чисел // Михаил Киришский

vector<int> GCF_NN_N(vector<int> a, vector<int> b); // НОД натуральных чисел //Старосельский Александр


////////////////////////////////////////////////////////////Натуральные числа////////////////////////////////////////////////////////////
//
//
//
//
//
////////////////////////////////////////////////////////////Целые числа////////////////////////////////////////////////////////////

vector<int> ABS_Z_N(vector<int> a);  // Абсолютная величина числа, результат - натуральное //Старосельский Александр козёл

vector<int> MUL_ND_N(vector<int> entry, int number); //Умножение целого на цифру //Игорян

vector<int> MUL_ZM_Z(vector<int> input); //Умножение целого числа на -1 //Табояков Иван

vector<int> TRANS_Z_N(vector<int> a);//Преобразование целого неотрицательного в натуральное//Жиренкин Артем

int POZ_Z_D(vector<int> num); // Определение положительности числа (2 - положительное, 0 — равное нулю, 1 - отрицательное) // Астахов Михаил 

////////////////////////////////////////////////////////////Целые числа////////////////////////////////////////////////////////////
//
//
//
//
//
////////////////////////////////////////////////////////////Рациональные числа////////////////////////////////////////////////////////////

Drob TRANS_Z_Q(vector <int> a); //Преобразование целого в дробное // Жиренкин Артём

int INT_Q_B(Drob a);// Определение положительности числа (2 - положительное, 0 — равное нулю, 1 - отрицательное) // Ермольев Максим Викторович