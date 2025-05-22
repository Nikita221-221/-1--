#include "pch.h"
#include "CppUnitTest.h"

#include "..\DocumentationForFunctions\Moduls.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



//ТЕСТЫ БЕЛОГО ЯЩИКА
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		// S = 1.23 Введенное число является десятичной дробью
		TEST_METHOD(IsDataCorrect_SisDecFract_false)
		{
			//arrange
			string S = "1.23";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = -1 Введенное число отрицательно
		TEST_METHOD(IsDataCorrect_SisNegative_false)
		{
			//arrange
			string S = "-1";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = qwerty Введено вовсе не число, а строка
		TEST_METHOD(IsDataCorrect_SisAlpha_false)
		{
			//arrange
			string S = "qwerty";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = 99999 Введенное число слишком большое
		TEST_METHOD(IsDataCorrect_SisLarge_false)
		{
			//arrange
			string S = "99999";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = 1 Введенное число способно пройти сквозь все проверки
		TEST_METHOD(IsDataCorrect_SisCorrect_true)
		{
			//arrange
			string S = "1";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsTrue(res);
		}


	};
}

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		// S = 777 Введенное число прошло через фильтрацию IsDataCorrect
		TEST_METHOD(toBinaryKey_WorksProperly_true)
		{
			//arrange
			int S = 777;

			//Act
			int res = toBinaryKey(S);

			//Assert
			Assert::AreEqual(1100001001, res);
		}



	};
}

//ТЕСТЫ ЧЕРНОГО ЯЩИКА
namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		/*
		Тест-кейс №1 Десятичная дробь
		Шаги
			1. Запустить программу 
			2. Ввести значение:
				344.522
			Или
				344,522
			3. Нажать на кнопку “Enter”
		Ожидаемый результат:
		Появляется сообщение о недопустимости ввода десятичной дроби и просьба попытаться ввести еще раз
		*/
		TEST_METHOD(KeyAfterMinute_SisDecFract_zero)
		{
			//arrange
			string S = "344.522";

			//Act
			int res = KeyAfterMinute(S);

			//Assert
			Assert::AreEqual(0, res);
		}

		/*
		Тест-кейс №2 Буквы в числе
		Шаги
			1. Запустить программу 
			2. Ввести значение:
				123а
			3. Нажать на кнопку “Enter”
		Ожидаемый результат
		Появляется сообщение о том, что введенное значение не является числом, и просьба попытаться ввести еще раз
		*/

		TEST_METHOD(KeyAfterMinute_AlphaInNumber_zero)
		{
			//arrange
			string S = "123a";

			//Act
			int res = KeyAfterMinute(S);

			//Assert
			Assert::AreEqual(0, res);
		}

		/*
		Тест-кейс №3 Символы в числе
		Шаги
			1. Запустить программу 
			2. Ввести значение:
				123№
			3. Нажать на кнопку “Enter”
		Ожидаемый результат
		Появляется сообщение о том, что введенное значение не является числом, и просьба попытаться ввести еще раз
		*/

		TEST_METHOD(KeyAfterMinute_SpecialAlphaInNumber_zero)
		{
			//arrange
			string S = "123№";

			//Act
			int res = KeyAfterMinute(S);

			//Assert
			Assert::AreEqual(0, res);
		}
		/*
		Тест - кейс №4 Огромное число
			Шаги
			1. Запустить программу
			2. Ввести значение :
					9999999999
			3. Нажать на кнопку “Enter”
		Ожидаемый результат
		Появляется сообщение о недопустимости ввода чрезмерно большого числа и просьба попытаться ввести еще раз
		*/

		TEST_METHOD(KeyAfterMinute_LargeNumber_zero)
		{
			//arrange
			string S = "9999999999";

			//Act
			int res = KeyAfterMinute(S);

			//Assert
			Assert::AreEqual(0, res);
		}

		/*
		Тест - кейс №5 Введенное число, способное пройти проверку
			Шаги
			1. Запустить программу
			2. Ввести значение :
				777
			3. Нажать на кнопку “Enter”
		Ожидаемый результат
		Программа выводит обработанное число пользователя 777, а именно 781
		*/

		TEST_METHOD(KeyAfterMinute_RightNumber_781)
		{
			//arrange
			string S = "777";

			//Act
			int res = KeyAfterMinute(S);

			//Assert
			Assert::AreEqual(781, res);
		}
	};
}