#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab1.3/LongLong.cpp"
#include "../OOP Lab1.3/LongLong.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(TestAddition)
		{
			LongLong num1(10, 20);
			LongLong num2(30, 40);

			LongLong sum = num1.add(num2);

			Assert::AreEqual(40L, sum.getHighPart());
			Assert::AreEqual(60L, sum.getLowPart());
		}
	};
}

