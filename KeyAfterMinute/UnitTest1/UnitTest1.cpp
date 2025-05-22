#include "pch.h"
#include "CppUnitTest.h"

#include "..\DocumentationForFunctions\Moduls.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		// S = 1.23 ¬веденное число €вл€етс€ дес€тичной дробью
		TEST_METHOD(IsDataCorrect_SisDecFract_false)
		{
			//arrange
			string S = "1.23";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = -1 ¬веденное число отрицательно
		TEST_METHOD(IsDataCorrect_SisNegative_false)
		{
			//arrange
			string S = "-1";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = qwerty ¬ведено вовсе не число, а строка
		TEST_METHOD(IsDataCorrect_SisAlpha_false)
		{
			//arrange
			string S = "qwerty";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = 99999 ¬веденное число слишком большое
		TEST_METHOD(IsDataCorrect_SisLarge_false)
		{
			//arrange
			string S = "99999";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = 1 ¬веденное число способно пройти сквозь все проверки
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

		// S = 777 ¬веденное число прошло через фильтрацию IsDataCorrect
		TEST_METHOD(toBinaryKey_Works_Properly)
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

