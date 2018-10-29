#include "stdafx.h"
#include "CppUnitTest.h"
#include "../3.2 алг/Class.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests_for_lab_32_
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		        TEST_METHOD(Empty_or_not)
		         {
			       LinkedList Spisok;
			       Assert::IsTrue(Spisok.isEmpty());
		         }
		        TEST_METHOD(Empty_or_not1)
				{
					LinkedList Spisok;
					Spisok.push_front(5);
					Assert::IsFalse(Spisok.isEmpty());
				}
                TEST_METHOD(equals_or_not)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
					Spisok1.push_back(4);

					LinkedList Spisok2;
					Spisok2.push_back(1);
					Spisok2.push_back(2);
					Spisok2.push_back(3);
					Spisok2.push_back(4);

					Assert::IsTrue(Spisok1.equals(&Spisok2));
				}
				TEST_METHOD(equals_or_not1)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
					Spisok1.push_back(4);

					LinkedList Spisok2;
					Spisok2.push_front(4);
					Spisok2.push_front(3);
					Spisok2.push_front(2);
					Spisok2.push_front(1);

					Assert::IsTrue(Spisok1.equals(&Spisok2));
				}
				TEST_METHOD(at)
				{
					
					LinkedList Spisok;
					Spisok.push_back(1);
					Spisok.push_back(2);
					Spisok.push_back(3);
					Spisok.push_back(4);

					Assert::IsTrue(Spisok.at(3) == 4);
				}
                TEST_METHOD(push_front_)
				{
					LinkedList Spisok;
					Spisok.push_front(1);
					Spisok.push_front(2);
					Spisok.push_front(3);
					Spisok.push_front(4);
					
					Assert::IsTrue(Spisok.at(3) ==1 ); 
				}
				TEST_METHOD(push_front_1)
				{
					LinkedList Spisok;
					Spisok.push_front(1);
					Spisok.push_front(2);
					Spisok.push_front(3);
					Spisok.push_front(4);

					Assert::IsFalse(Spisok.at(3) == 4);
				}
				TEST_METHOD(push_back_)
				{
					LinkedList Spisok;
					Spisok.push_back(1);
					Spisok.push_back(2);
					Spisok.push_back(3);
					Spisok.push_back(4);

					Assert::IsTrue(Spisok.at(3) == 4);
				}
				TEST_METHOD(push_back_1)
				{
					LinkedList Spisok;
					Spisok.push_back(1);
					Spisok.push_back(2);
					Spisok.push_back(3);
					Spisok.push_back(4);

					Assert::IsFalse(Spisok.at(3) == 3);
				}
				TEST_METHOD(equals_or_not2_back)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
			

					LinkedList Spisok2;
					Spisok2.push_back(1);
					

					Assert::IsFalse(Spisok1.equals(&Spisok2));
				}
				TEST_METHOD(equals_or_not2_front)
				{
					LinkedList Spisok1;
					Spisok1.push_front(1);
					Spisok1.push_front(2);
					Spisok1.push_back(3);


					LinkedList Spisok2;
					Spisok2.push_front(1);


					Assert::IsFalse(Spisok1.equals(&Spisok2));
				}
				TEST_METHOD(equals_pop_back)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
					Spisok1.push_back(4);

					LinkedList Spisok2;
					Spisok2.push_back(1);
					Spisok2.push_back(2);
					Spisok2.push_back(3);

					Spisok1.pop_back();

					Assert::IsTrue(Spisok1.equals(&Spisok2));
				}
				TEST_METHOD(equals_pop_front)
				{
					LinkedList Spisok1;
					Spisok1.push_front(5);
					Spisok1.push_front(1);
					Spisok1.push_front(2);
					Spisok1.push_front(3);
					

					LinkedList Spisok2;
					Spisok2.push_front(1);
					Spisok2.push_front(2);
					Spisok2.push_front(3);

					Spisok1.pop_front();

					Assert::IsFalse(Spisok1.equals(&Spisok2));
				}
				TEST_METHOD(insert_equals_0posotion)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(3);
					Spisok1.push_back(4);

					LinkedList Spisok2;
				
					Spisok2.push_back(3);
					Spisok2.push_back(4);

					Spisok2.insert(1, 0);

					Assert::IsTrue(Spisok1.equals(&Spisok2));
				}
				TEST_METHOD(insert_equals)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(3);
					Spisok1.push_back(4);

					LinkedList Spisok2;
					Spisok2.push_back(1);
					Spisok2.push_back(2);
					Spisok2.push_back(3);
					Spisok2.push_back(4);

					Spisok1.insert(2, 1);

					Assert::IsTrue(Spisok1.equals(&Spisok2));
				}
                TEST_METHOD(insert_back_equals)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);

					LinkedList Spisok2;
					Spisok2.push_back(1);
					Spisok2.push_back(2);
					Spisok2.push_back(3);
					Spisok2.push_back(4);

					Spisok1.insert(4, 1);

					Assert::IsFalse(Spisok1.equals(&Spisok2));
				}
				TEST_METHOD(clear_spisok)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
					Spisok1.clear();
					Assert::IsTrue(Spisok1.isEmpty());

				}
				TEST_METHOD(set_in_spisok)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
					Spisok1.set(1, 8);
					Assert::IsTrue(Spisok1.at(1) == 8);
				}
				TEST_METHOD(set_in_spisok1)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
					Spisok1.set(1, 9);
					Assert::IsFalse(Spisok1.at(1) == 1);
				}
                TEST_METHOD(push_spisok)
				{
					LinkedList Spisok1;
					Spisok1.push_back(1);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
					LinkedList Spisok2;
					Spisok2.push_back(4);
					Spisok2.push_back(5);
					Spisok2.push_back(6);
					Spisok1.push_front_list(&Spisok2);
					Assert::IsTrue(Spisok1.at(2) ==3);
				}
                TEST_METHOD(deletee)
				{
					LinkedList list1;
					list1.push_back(1);
					list1.push_back(2);
					list1.push_back(3);
					list1.push_back(4);

					LinkedList list2;
					list2.push_back(1);
					list2.push_back(2);
					list2.push_back(4);

					list1.deletee(2);

					Assert::IsTrue(list1.equals(&list2));
				}
				TEST_METHOD(deletee1)
				{
					LinkedList list1;
					list1.push_back(1);
					list1.push_back(2);
					list1.push_back(3);
					list1.push_back(4);

					LinkedList list2;
					list2.push_back(1);
					list2.push_back(2);
					list2.push_back(4);

					list1.deletee(1);

					Assert::IsFalse(list1.equals(&list2));
				}
				TEST_METHOD(clear_spisok1)
				{
					LinkedList Spisok1;
					Spisok1.push_back(4);
					Spisok1.push_back(2);
					Spisok1.push_back(3);
					Spisok1.clear();
					Spisok1.push_back(6);
					Assert::IsFalse(Spisok1.isEmpty());

				}

	
	};
}