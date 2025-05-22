#pragma once
#include <iostream>
#include <string>
using namespace std;


bool containsSpecialCharacters(string S) 
{
	
	string specialChars = "?№@#$%^&*()";
	
	for (int i = 0; i < S.length(); i++)
	{
		for (int j = 0; j < specialChars.length(); j++)
		{
			if (S[i] == specialChars[j])
			{
				return true;
			}
		}
	}

	return false; 
}

int toBinaryKey(int S) {
	if (S == 0) return 0;

	int binaryResult = 0;
	int multiplier = 1;

	while (S > 0) {
		int remainder = S % 2;
		binaryResult += remainder * multiplier;
		S /= 2;
		multiplier *= 10;
	}

	return binaryResult;
}



bool IsDataCorrect(string S)
{
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == '.')
		{
			cout << "Введенное число не соответствует требуемым критериям. Попробуйте еще раз";
			return false;
		}
	}

	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == '-')
		{
			cout << "Введенное число не соответствует требуемым критериям. Попробуйте еще раз";
			return false;
		}
	}

	for (int i = 0; i < S.length(); i++)
	{
		if (isalpha(S[i]))
		{
			cout << "Введенное число не соответствует требуемым критериям. Попробуйте еще раз";
			return false;
		}
	}

	if (S.length() > 5)
	{
		cout << "Введенное число не соответствует требуемым критериям. Попробуйте еще раз";
		return false;
	}
	long int temp = stol(S);

	if (temp > 32767)
	{
		cout << "Введенное число не соответствует требуемым критериям. Попробуйте еще раз";
		return false;
	}

	if (containsSpecialCharacters(S))
	{
		return false;
	}

	return true;

}

int KeyAfterMinute(string S)
{
	int controlSumm = 0;
	int binaryKey;

	//модуль проверки корректности данных
	if (!IsDataCorrect(S))
	{
		return 0;
	}

	/*Двоичное отображение ключа*/binaryKey = toBinaryKey(stoi(S));
	//Основной блок, считающий значение
	while (binaryKey > 0)
	{
		if (binaryKey % 10 == 1)
		{
			controlSumm++;
		}

		binaryKey /= 10;
	}

	return (stoi(S) + controlSumm);

}