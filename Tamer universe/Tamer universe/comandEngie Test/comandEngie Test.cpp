#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace comandEngieTest
{
	TEST_CLASS(comandEngieTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 1;
		}

		TEST_METHOD(TestMethod2) {

			int b = 10;
			int bober = 10;
			Assert::AreEqual(10, b - bober);
		}
		TEST_METHOD(TestMethod3) {

			int bober[5];
			for (int i = 0; i < 5; i++) {
				bober[i] = i;
			}

			Assert::AreEqual(1, bober[0]+bober[1]);

		}

	};
}
