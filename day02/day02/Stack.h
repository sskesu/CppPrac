#pragma once
#include <iostream>

using namespace std;

class Stack
{
private:
	//�ش� �迭�� ����Ű�� ������
	//�ش� �迭�� �ּҸ� ��� ������
	int* data;
	//������ ����
	int count;
public:
	//�ڷḦ �����ִ� �Լ�
	void Clear();
	//����� �˷��ִ� �Լ�
	int Count();
	//��� �ִ��� �ƴ��� �˷��ִ� �Լ�
	bool IsEmpty();
	//���� �־��ִ� �Լ�(_data)
	void Push(int _data);
	//���� ���ִ� �Լ�
	//���鼭 ���� ��ȯ
	int Pop();
public:
	Stack();
	~Stack();
};

