#include "SingleList.h"


int main() {
	SingleList SL;
	SL.AddNode(1);
	SL.AddNode(2);
	SL.AddNode(3);
	SL.AddNode(4);

	SL.PrintAll();
	cout << "�ѤѤѤѤѤѤѤѤѤ�" << endl;

	SL.InsertNode(3, 5);
	SL.InsertNode(3, 5);
	SL.InsertNode(3, 5);

	SL.UpdateNode(3, 6);
	
	SL.PrintAll();
	cout << "�ѤѤѤѤѤѤѤѤѤ�" << endl;

	SL.DeleteNodeData(5);
	SL.DeleteNodeData(4);
	SL.PrintAll();
	cout << "�ѤѤѤѤѤѤѤѤѤ�" << endl;

	SL.DeleteIndex(2);
	SL.PrintAll();

	int num = SL.GetListSize();
	cout << "����Ʈ ũ�� : " << num << endl;

	num = SL.GetNodeData(3);
	cout << "3��° ������ �� : " << num << endl;
	
	if (!SL.IsEmpty()) {
		cout << "����Ʈ�� ������� �ʽ��ϴ�." << endl;
		SL.ClearAllNode();
	}
	SL.PrintAll();

	return 0;
}