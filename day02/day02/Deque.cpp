#include "Deque.h"

void Deque::Push_Back(int num)
{
	count++;
	if (count == 1) {
		data[0] = num;
	}
	else {
		int* temp = new int[count];
		for (int i = 0; i < count; i++) {
			temp[i] = data[i];
		}
		temp[count - 1] = num;

		delete data;

		data = temp;
	}

	cout << data[count - 1] << " ���� �� �ڿ� �־����ϴ�." << endl;
}

void Deque::Push_Front(int num)
{
	count++;
	if (count == 1) {
		data[0] = num;
	}
	else {
		int* temp = new int[count];
		for (int i = 0; i < count - 1; i++) { 
			temp[i + 1] = data[i];
		}
		temp[0] = num;

		delete data;

		data = temp;
	}

	cout << data[0] << " ���� �� �տ� �־����ϴ�." << endl;
}

int Deque::Pop_Back() 
{
	int* temp = new int[count];
	for (int i = 0; i < count - 1; i++) {
		temp[i] = data[i];
	}
	temp[count - 1] = -99;
	count--;

	for (int i = 0; i < count; i++) {
		data[i] = temp[i];
	}

	return data[count];
}

int Deque::Pop_Front()
{
	count--;
	int num = data[0];
	int* temp = new int[count];
	for (int i = 0; i < count; i++) {
		temp[i] = data[i + 1];
	}

	delete data;

	data = temp;


	return num;
}

bool Deque::IsEmpty()
{
	if (count == 0) {
		return true;
	}

	return false;
}

void Deque::Clear()
{
	count = 0;
	data = nullptr;
}

int Deque::Count()
{
	return count;
}

void Deque::PrintAll()
{
	for (int i = 0; i < count; i++) {
		cout << i + 1 << "��° �� : " << data[i] << endl;
	}
}

Deque::Deque()
{
	data = new int[1];
	data[0] = -99;
	count = 0;
}

Deque::~Deque()
{
	delete data;
}
