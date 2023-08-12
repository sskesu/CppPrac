#pragma once
#include <iostream>
using namespace std;

class Queue
{
public:
	//Queue�� ����Ű�� ������
	int* data;
private:
	//������ ����
	int count;
public:
	//�ڷḦ �����ִ� ����
	void Clear();
	//����� �˷��ִ� ����
	int Count();
	//��� �ִ��� �˷��ִ� ����
	bool IsEmpty();
	//���� �־��ִ�(int num) 
	void Enqueue(int _data);
	//���� ���ִ� ����
	int Dequeue();
public:
	Queue();
	~Queue();
};

