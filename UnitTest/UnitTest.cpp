#include "pch.h"
#include "CppUnitTest.h"
#include "../FinalPractice/FinalPractSol.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrange
			double arr[SIZE] = { 1.3, 2.2, -3.5, 0.0, 10.2 };
			double res,res2;

			//Act
			res = sumOfRange(arr, 0, 2, SIZE);
			res2 = sumOfRange(arr, 0, SIZE, SIZE);
			//Assert
			Assert::AreEqual(3.5, res);
			Assert::AreEqual(10.2, res2);
		}
		TEST_METHOD(TestMethod2) {
			//Arrange
			double arr[SIZE] = { 1.3, 2.2, -3.5, 0.0, 10.2 };
			double res, res2;

			//Act
			res = productOfRange(arr, 0, SIZE, SIZE);
			res2 = productOfRange(arr, 0, 1, SIZE);
			//Assert
			Assert::AreEqual(1.3, res2);
			Assert::AreEqual(0.0, res);
		}
	};
}
