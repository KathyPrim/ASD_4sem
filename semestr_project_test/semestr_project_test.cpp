#include "pch.h"
#include "CppUnitTest.h"
#include "../semestr_project/EdKarp.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace semestrprojecttest
{
	TEST_CLASS(semestrprojecttest)
	{
	public:
		
		TEST_METHOD(first)
		{
			EdKarp* t = new EdKarp();
			t->readList("in.txt");
			cout << t->MaxFlow();
		}
	};
}
