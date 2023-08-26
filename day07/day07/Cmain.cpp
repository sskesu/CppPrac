#include "BinaryTree.h"

int main() {
	BinaryTree BT;

	BT.AddNode(20);
	BT.AddNode(10);
	BT.AddNode(15);
	BT.AddNode(25);
	BT.AddNode(17);
	BT.AddNode(30);
	BT.AddNode(32);
	BT.AddNode(7);

	BT.PrintAll();
	cout << "天天天天天天" << endl;

	//
	BT.RemoveNode(20);
	BT.PrintAll();

	return 0;
}

	