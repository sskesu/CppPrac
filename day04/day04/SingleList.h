#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

class SingleList
{
public:
	Node* head;
	int count;
public:
	//node �߰�
	void AddNode(int _data);
	//node ����(���� == _index)
	void InsertNode(int _index, int _data);
	//node ������ ����(���� == _index)
	void UpdateNode(int _index, int _data);
	//node�� ����(�� == _data)
	void DeleteNodeData(int _data);
	//node�� ����(���� == _index)
	void DeleteIndex(int _index);
	//��� node ����
	void ClearAllNode();
	//���ϴ� node�� ���� �ҷ�����(���� == _index)
	int GetNodeData(int _index);
	//���� Listũ��
	int GetListSize();
	//���� �����Ͱ� ��� �ִ��� �ƴ���
	bool IsEmpty();
	//��� node ���
	void PrintAll();
public:
	SingleList();
	~SingleList();
};
