#include "DoubleLinkedList.h"

void DoubleList::Push_Back(int _data)
{
	count++;
	Node* temp = new Node;
	temp->data = _data;
	temp->right = nullptr;
	if (count == 1) {
		temp->left = nullptr;
		head = temp;
		tail = temp;
	}
	else {
		tail->right = temp;
		temp->left = tail;
		tail = temp;
	}
}

void DoubleList::Push_Front(int _data)
{
	count++;
	Node* temp = new Node;
	temp->data = _data;
	temp->left = nullptr;
	if (count == 1) {
		temp->right = nullptr;
		head = temp;
		tail = temp;
	}
	else {
		head->left = temp;
		temp->right = head;
		head = temp;
	}
}

Node* DoubleList::CreateNode(int _data)
{
	return nullptr;
}

int DoubleList::Pop_Back()
{
	return 0;
}

int DoubleList::Pop_Front()
{
	return 0;
}

bool DoubleList::Empty()
{
	return false;
}

void DoubleList::Clear()
{
}

void DoubleList::Insert(int _index, int _data)
{
}

void DoubleList::Insert(int _index, int _count, int _data)
{
}

void DoubleList::DeleteNode(int _index)
{
}

void DoubleList::PrintAll()
{
	Node* temp = new Node;
	temp = head;
	for (int i = 0; i < count; i++) {
		cout << i + 1 << "¹øÂ° °ª : " << temp->data << endl;
		temp = temp->right;
	}
}

DoubleList::~DoubleList()
{
}
