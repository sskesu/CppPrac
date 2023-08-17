#include "CircularList.h"

int main() {
	CircularList CL;
	CL.AddNode(1);
	CL.AddNode(2);
	CL.AddNode(3);
	CL.AddNode(4);

	CL.PrintAll();

	CL.InsertNode(3, 5);
	CL.InsertNode(1, 6);

	CL.PrintAll();

	CL.UpdateNode(1, 7);
	CL.UpdateNode(3, 7);

	CL.PrintAll();

	CL.DeleteNodeData(4);

	CL.PrintAll();

	CL.DeleteIndex(5);

	CL.PrintAll();

	int num = CL.GetNodeData(4);
	cout << num << endl;

	num = CL.Count();
	cout << num << endl;

	CL.IsEmpty();
	CL.ClearAllNode();
	CL.IsEmpty();
	return 0;
}