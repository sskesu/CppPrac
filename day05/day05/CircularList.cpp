#include "CircularList.h"

void CircularList::AddNode(int _data)
{
	if (tail == nullptr) {
		Node* temp = new Node;
		temp->data = _data;
		temp->next = temp;
		tail = temp;
	}
	else {
		Node* temp = new Node;
		temp->data = _data;
		temp->next = tail->next;
		tail->next = temp;
		tail = temp;
	}
}

void CircularList::InsertNode(int _index, int _data)
{
	Node* temp1 = new Node;
	Node* temp2 = new Node;
	temp1 = tail;
	temp2->data = _data;

	for (int i = 1; i < _index; i++) {
		temp1 = temp1->next;
	}

	temp2->next = temp1->next;
	temp1->next = temp2;
}

void CircularList::UpdateNode(int _index, int _data)
{
	Node* temp = new Node;
	temp = tail;

	for (int i = 0; i < _index; i++) {
		temp = temp->next;
	}

	temp->data = _data;
}

void CircularList::DeleteNodeData(int _data)
{
	Node* temp1 = new Node;
	Node* temp2 = new Node;
	temp1 = tail;
	temp2 = temp1->next;

	while (temp1->next != tail) {
		if (temp2->data == _data) {
			temp1->next = temp2->next;
			temp2 = temp1->next;
		}
		else {
			temp1 = temp1->next;
			temp2 = temp1->next;
		}
	}

	if (tail->data == _data) {
		temp1->next = temp2->next;
		tail = temp1;
	}
}

void CircularList::DeleteIndex(int _index)
{
	Node* temp1 = new Node;
	Node* temp2 = new Node;

	temp1 = tail;
	temp2 = tail->next;

	for (int i = 1; i < _index; i++) {
		temp1 = temp2;
		temp2 = temp1->next;
	}

	if (temp2 == tail) {
		tail = temp1;
	}
	temp1->next = temp2->next;
}

void CircularList::ClearAllNode()
{
	tail = nullptr;
}

int CircularList::GetNodeData(int _index)
{
	Node* temp = new Node;
	temp = tail;

	for (int i = 0; i < _index; i++) {
		temp = temp->next;
	} 
	return temp->data;
}

bool CircularList::IsEmpty()
{
	if (tail == nullptr) {
		cout << "비어있습니다." << endl;
		return true;
	}
	cout << "비어있지않습니다." << endl;
	return false;
}

void CircularList::PrintAll()
{
	int index = 0;
	Node* temp = tail->next;
	while (true) {
		index++;
		cout << index << "번째 값 : " << temp->data << endl;
		temp = temp->next;
		if (temp == tail->next) {
			break;
		}
	}
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
}

int CircularList::Count()
{
	if (tail == nullptr) {
		return 0;
	}

	int count = 0;
	Node* temp = new Node;
	temp = tail;
	while (true) {
		count++;
		temp = temp->next;
		if (temp == tail) {
			break;
		}
	}
	return count;
}

CircularList::CircularList()
{
	tail = nullptr;
}

CircularList::~CircularList()
{
}
