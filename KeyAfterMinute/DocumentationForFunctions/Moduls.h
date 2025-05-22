#pragma once
#include <iostream>
#include <string>
using namespace std;



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

	return true;

}