#pragma once
#include <iostream>
using namespace std;
class Deque
{
private:
	int* data;
	int count;
public:
	//�ڷ� ���� �߰�
	void Push_Back(int num);
	//������ ���� �߰�
	void Push_Front(int num);
	//�ڿ� �ִ� ������ ����
	int Pop_Back();
	//�տ� �ִ� ������ ����
	int Pop_Front();
	//���� �ִ��� ������ Ȯ��
	bool IsEmpty();
	//��ü ������ ����
	void Clear();
	//�� �ִ� ���� ��ȯ
	int Count();
public:
	//��ü �ڷ� ���
	void PrintAll();
public:
	Deque();
	~Deque();
};

