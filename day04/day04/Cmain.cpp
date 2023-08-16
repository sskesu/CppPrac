#include "SingleList.h"


int main() {
	SingleList SL;
	SL.AddNode(1);
	SL.AddNode(2);
	SL.AddNode(3);
	SL.AddNode(4);

	SL.PrintAll();
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;

	SL.InsertNode(3, 5);
	SL.InsertNode(3, 5);
	SL.InsertNode(3, 5);

	SL.UpdateNode(3, 6);
	
	SL.PrintAll();
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;

	SL.DeleteNodeData(5);
	SL.DeleteNodeData(4);
	SL.PrintAll();
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;

	SL.DeleteIndex(2);
	SL.PrintAll();

	int num = SL.GetListSize();
	cout << "리스트 크기 : " << num << endl;

	num = SL.GetNodeData(3);
	cout << "3번째 데이터 값 : " << num << endl;
	
	if (!SL.IsEmpty()) {
		cout << "리스트가 비어있지 않습니다." << endl;
		SL.ClearAllNode();
	}
	SL.PrintAll();

	return 0;
}