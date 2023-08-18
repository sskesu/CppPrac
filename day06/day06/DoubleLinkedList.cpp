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
	Node* temp = new Node{
		_data,
		nullptr,
		nullptr
	};

	return nullptr;
}

int DoubleList::Pop_Back()
{
	count--;
	int num = tail->data;
	Node* temp = new Node;
	temp = tail->left;
	tail = nullptr;
	tail = temp;

	return num;
}

int DoubleList::Pop_Front()
{
	count--;
	int num = head->data;
	Node* temp = new Node;
	temp = head->right;
	head = nullptr;
	head = temp;

	return num;
}

bool DoubleList::Empty()
{
	if (count == 0) {
		return true;
	}
	return false;
}

void DoubleList::Clear()
{
	//count = 0;
	while (head != nullptr) {
		Node* temp = new Node;
		temp = head;
		head = head->right;
		delete temp; count--;
	}
	
}

void DoubleList::Insert(int _index, int _data)
{
	count++;
	Node* temp1 = new Node;
	Node* temp2 = new Node;

	temp1 = head;
	temp2->data = _data;

	if (_index == 1) {
		head->left = temp2;
		temp2->right = head;
		head = temp2;
	}
	else if (_index == count) {
		tail->right = temp2;
		temp2->left = tail;
		tail = temp2;
	}
	else {
		for (int i = 2; i < _index; i++) {
			temp1 = temp1->right;
		}
		temp2->right = temp1->right;
		temp2->left = temp1;
		temp1->right = temp2;
		temp1 = temp2->right;
		temp1->left = temp2;
	}
	
}

void DoubleList::Insert(int _index, int _count, int _data)
{
	for (int i = 0; i < _count; i++) {
		count++;
		Node* temp1 = new Node;
		Node* temp2 = new Node;

		temp1 = head;
		temp2->data = _data;

		if (_index == 1) {
			head->left = temp2;
			temp2->right = head;
			head = temp2;
		}
		else if (_index == count) {
			tail->right = temp2;
			temp2->left = tail;
			tail = temp2;
		}
		else {
			for (int i = 2; i < _index; i++) {
				temp1 = temp1->right;
			}
			temp2->right = temp1->right;
			temp2->left = temp1;
			temp1->right = temp2;
			temp1 = temp2->right;
			temp1->left = temp2;
		}
	}
}

void DoubleList::DeleteNode(int _index)
{
	count--;
	Node* temp1 = new Node;
	Node* temp2 = new Node;
	temp1 = head;

	if (_index == 1) {
		head = temp1->right;
		delete temp1;
	}
	else if (_index == count + 1) {
		temp1 = tail;
		tail = temp1->left;
		delete temp1;
	}
	else {
		for (int i = 2; i < _index; i++) {
			temp1 = temp1->right;
		}
		temp2 = temp1->right;
		temp1->right = temp2->right;
		delete temp2;
		temp2 = temp1->right;
		temp2->left = temp1;
	}
}

void DoubleList::PrintAll()
{
	Node* temp = new Node;
	temp = head;
	for (int i = 0; i < count; i++) {
		cout << i + 1 << "廓簞 高 : " << temp->data << endl;
		temp = temp->right;
	}
	cout << "天天天天天天天天" << endl;
}

DoubleList::~DoubleList()
{
	if (count != 0) {
		Clear();
	}
}
