#pragma once
#include <iostream>

using namespace std;

class ArrayList
{
public:
	int* data;
	int count;
public:
	//�߰�
	void AddNode(int _data);
	//�� ����(���� == _index)
	void InsertNode(int _index, int _data);
	//�� ����(���� == _index, ���� == _count)
	void InsertNode(int _index, int _count, int _data);
	//������ ����(���� == _index)
	void UpdateNode(int _index, int _data);
	//�� ����(�� == _data)
	void DeleteNodeData(int _data);
	//�� ����(���� == _index)
	void DeleteIndex(int _index);
	//��� �� ����
	void ClearAllNode();
	//���ϴ� ���� ���� �ҷ�����(���� == _index)
	int GetNodeData(int _index);
	//���� Listũ��
	int GetListSize();
	//���� �����Ͱ� ��� �ִ��� �ƴ���
	bool IsEmpty();
	//��� node ���
	void PrintAll();
public:
	ArrayList();
	~ArrayList();

};

