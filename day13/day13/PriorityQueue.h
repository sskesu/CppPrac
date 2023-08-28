#pragma once
#include <iostream>

using namespace std;

#define MaxCount 100

struct Node
{
	int priority;
	int data;
};

class PriorityQueue
{
private:
	Node heap[MaxCount];
	int count;
public:
	//����ִ��� �˷��ִ� ����
	bool IsEmpty();
	//���� �߰�(�켱����, ��)
	void Push(int _priority, int _data);
	//�켱������ ���� Node ��ȯ
	Node Pop();
	int Count();
	void PrintAll();
private:
	//�켱���� ���� �ڽ��� index�� ��ȯ
	int GetChildIndex(int selfIndex);
	//�θ��� index
	int GetParentIndex(int selfIndex);
	//���� �ڽ��� index
	int GetLeftChildIndex(int selfIndex);
	//������ �ڽ��� index
	int GetRightChildIndex(int selfIndex);
	//�� ���� �ٲ�
	void Swap(int firstIndex, int secondIndex);
public:
	PriorityQueue();
	~PriorityQueue() {}
};