#include "pch.h"
#include "CppUnitTest.h"

#include "..\DocumentationForFunctions\Moduls.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



//����� ������ �����
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		// S = 1.23 ��������� ����� �������� ���������� ������
		TEST_METHOD(IsDataCorrect_SisDecFract_false)
		{
			//arrange
			string S = "1.23";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = -1 ��������� ����� ������������
		TEST_METHOD(IsDataCorrect_SisNegative_false)
		{
			//arrange
			string S = "-1";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = qwerty ������� ����� �� �����, � ������
		TEST_METHOD(IsDataCorrect_SisAlpha_false)
		{
			//arrange
			string S = "qwerty";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = 99999 ��������� ����� ������� �������
		TEST_METHOD(IsDataCorrect_SisLarge_false)
		{
			//arrange
			string S = "99999";

			//Act
			bool res = IsDataCorrect(S);

			//Assert
			Assert::IsFalse(res);
		}

		// S = 1 ��������� ����� �������� ������ ������ ��� ��������
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

		// S = 777 ��������� ����� ������ ����� ���������� IsDataCorrect
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

//����� ������� �����
namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		/*
		����-���� �1 ���������� �����
		����
			1. ��������� ��������� 
			2. ������ ��������:
				344.522
			���
				344,522
			3. ������ �� ������ �Enter�
		��������� ���������:
		���������� ��������� � �������������� ����� ���������� ����� � ������� ���������� ������ ��� ���
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
		����-���� �2 ����� � �����
		����
			1. ��������� ��������� 
			2. ������ ��������:
				123�
			3. ������ �� ������ �Enter�
		��������� ���������
		���������� ��������� � ���, ��� ��������� �������� �� �������� ������, � ������� ���������� ������ ��� ���
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
		����-���� �3 ������� � �����
		����
			1. ��������� ��������� 
			2. ������ ��������:
				123�
			3. ������ �� ������ �Enter�
		��������� ���������
		���������� ��������� � ���, ��� ��������� �������� �� �������� ������, � ������� ���������� ������ ��� ���
		*/

		TEST_METHOD(KeyAfterMinute_SpecialAlphaInNumber_zero)
		{
			//arrange
			string S = "123�";

			//Act
			int res = KeyAfterMinute(S);

			//Assert
			Assert::AreEqual(0, res);
		}
		/*
		���� - ���� �4 �������� �����
			����
			1. ��������� ���������
			2. ������ �������� :
					9999999999
			3. ������ �� ������ �Enter�
		��������� ���������
		���������� ��������� � �������������� ����� ��������� �������� ����� � ������� ���������� ������ ��� ���
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
		���� - ���� �5 ��������� �����, ��������� ������ ��������
			����
			1. ��������� ���������
			2. ������ �������� :
				777
			3. ������ �� ������ �Enter�
		��������� ���������
		��������� ������� ������������ ����� ������������ 777, � ������ 781
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