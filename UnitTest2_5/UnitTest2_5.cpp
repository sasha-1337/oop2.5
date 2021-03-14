#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop2.5\oop2.5\Long.cpp"
#include "D:\Student\oop2.5\oop2.5\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Long a;
			int t;
			t = a.Diff_2(1000, 7);
			Assert::AreEqual(t, 993);
		}
	};
}
