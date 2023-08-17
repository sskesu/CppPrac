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

	return 0;
}