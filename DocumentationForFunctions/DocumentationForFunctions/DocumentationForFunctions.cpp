#include <iostream>
#include <string>
#include "..\DocumentationForFunctions\Moduls.h"



using namespace std;
/// <summary>
/// Функция принимает целочисленную переменную, и преобразует её в её же двоичное отображение
/// <example> Например:
/// <code>
///		int result = toBinaryKey(777);
/// </code>
/// Результат в переменной <c>result</c> будет иметь значение 1100001001
/// </example>
/// </summary>
/// <param name="S">Целочисленная переменнная</param>
/// <returns>Возвращает двоичное отображение принимаемого числа</returns>


int toBinaryKey(int S);

///<summary>
/// Функция принимает строковую переменную, и проверяет её по следующим критериям:
/// 1) Принятое значение обязано быть натуральным числом
///		1.1) Число обязано быть не отрицательным
///		1.2) Число обязано не быть десятичной дробью
///		1.3) В числе не могут присутствовать какие-либо не численные символы. Оно не должно быть строкой
/// 2) Число обязано быть в рамках целочисленного типа
/// <example> Например:
/// <code>
///		bool result = IsDataCorrect(777)
/// </code>
///	Результат в переменной <c>result</c> будет иметь значение <c>true</c>
/// <code>
///		bool result = IsDataCorrect(1.15)
/// </code>
///	Результат в переменной <c>result</c> будет иметь значение <c>false</c> 
/// </example>
/// </summary>
/// <param name="S">Введенное пользователем значение</param>
/// <returns>Возвращает исстину или ложь в зависимости от того, насколько число проходит по заданным критериям</returns>


bool IsDataCorrect(string S);



int KeyAfterMinute(string S); //Основная функция





void main()
{
	string S;
	cin >> S;
	cout << KeyAfterMinute(S);

}