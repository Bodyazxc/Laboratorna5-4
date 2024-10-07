#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna-5.4/Laboratorna-5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double  p = S0(10);
			Assert::AreEqual(p, 10.0423, 0.0001);
		}

		TEST_METHOD(TestMethod2)
		{
			double  l = S1(10, 10);
			Assert::AreEqual(l, 10.0423, 0.0001);
		}
		
		TEST_METHOD(TestMethod3)
		{
			double  v = S2(19, 10);
			Assert::AreEqual(v, 10.0423, 0.0001);
		}

		TEST_METHOD(TestMethod4)
		{
			double  g = S3(10, 10, 0);
			Assert::AreEqual(g, 10.0423, 0.0001);
		}

		TEST_METHOD(TestMethod5)
		{
			double  f = S4(19, 10, 0);
			Assert::AreEqual(f, 10.0423, 0.0001);
		}
	};
}
