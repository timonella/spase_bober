#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestDataModel
{
	TEST_CLASS(TestDataModel)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 10;
			int b = 10;
			Assert::AreEqual(20, a + b);

		}
		TEST_METHOD(TestMethod2)
		{
			int a = 10;
			int b = 10;

			Assert::AreEqual(20, a - b);

		}
		TEST_METHOD(TestMethod3)
		{
			int arr[2];
			arr [0] = 10;
			arr [1] = 10;
			Assert::AreEqual(100, arr [0] * arr [1]);

		}
	};
}
