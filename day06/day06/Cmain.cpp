#include "DoubleLinkedList.h"

int main() {
	DoubleList DL;

	DL.Push_Back(1);
	DL.Push_Back(2);
	DL.Push_Back(3);

	DL.Push_Front(4);
	DL.Push_Front(5);
	DL.Push_Front(6);

	DL.PrintAll();

	int num = DL.Pop_Back();
	cout << num << endl;

	num = DL.Pop_Front();
	cout << num << endl;

	DL.PrintAll();

	DL.Insert(3, 7);

	DL.PrintAll();

	DL.Insert(4, 2, 8);

	DL.PrintAll();

	DL.DeleteNode(3);

	DL.PrintAll();
	return 0;
}