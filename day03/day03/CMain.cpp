#include "ArrayList.h"

int main() {
	ArrayList al;

	al.AddNode(1);
	al.AddNode(2);
	al.AddNode(3);

	al.InsertNode(2, 4);
	al.InsertNode(2, 5);
	al.InsertNode(2, 6);

	al.PrintAll();

	al.InsertNode(3, 3, 7);

	al.PrintAll();

	al.UpdateNode(3, 8);

	al.PrintAll();

	al.DeleteIndex(3);

	al.PrintAll();

	al.DeleteNodeData(7);

	al.PrintAll();

	int num = al.GetNodeData(4);;
	cout << "4��° ��� �� : " << num << endl;

	num = al.GetListSize();
	cout << "�迭 ũ�� : " << num << endl;

	if (!al.IsEmpty()) {
		cout << "�迭�� ������� �����Ƿ� ��� �� ����" << endl;
		al.ClearAllNode();
	}

	al.PrintAll();


	return 0;
}