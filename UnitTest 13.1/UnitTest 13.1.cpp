#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 13.1/Source.cpp"
#include "../Lab 13.1/dod.cpp"
#include "../Lab 13.1/sum.cpp"
#include "../Lab 13.1/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(test_a)
		{
			sum();
			Assert::AreEqual(n, 1);
		}
	};
}
