#include "IntListTest.h"
#include "IntSLList.h"

void IntListTest::run()
{
	IntSLList *intList1 = new IntSLList();
	intList1->addToHead(1);
	intList1->addToHead(2);
	intList1->addToHead(3);
	intList1->addToHead(4);
	intList1->addToHead(5);
	intList1->printAll();

	delete intList1;

	IntSLList *intList2 = new IntSLList();
	intList2->addToTail(1);
	intList2->addToTail(2);
	intList2->addToTail(3);
	intList2->addToTail(4);
	intList2->addToTail(5);
	intList2->printAll();

	delete intList2;

	IntSLList *intList3 = new IntSLList();
	intList3->addToTail(6);
	intList3->addToTail(7);
	intList3->addToTail(8);
	intList3->addToTail(9);
	intList3->addToTail(10);
	intList3->deleteFromHead();
	intList3->deleteNode(8);
	intList3->deleteFromTail();
	intList3->printAll();

	delete intList3;
}