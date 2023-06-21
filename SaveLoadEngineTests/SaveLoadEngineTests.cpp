#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SaveLoadEngineTests
{
	TEST_CLASS(TaskTests)
	{
	public:
		
		TEST_METHOD(TestMethod1) {
			int a = 100;
			int b = 200;

			Assert::AreEqual(300, a + b);
		}
	};
}
