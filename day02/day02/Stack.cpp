#include "Stack.h"

void Stack::Clear()
{
	for (int i = 0; i < count; i++) {
		data[i] = -99;
	}
	count = 0;
}

int Stack::Count()
{
	return count;
}

bool Stack::IsEmpty()
{
	if (count == 0) {
		return true;
	}
	return false;
}

void Stack::Push(int _data)
{
	count++; //1
	int* temp;
	temp = new int[count]; // 1
	temp[count - 1] = _data; // temp[0] = 11

	for (int i = 0; i < count-1; i++) {
		temp[i] = data[i];
	}


	for (int i = 0; i < count; i++) {
		data[i] = temp[i];
	}

	cout << data[count - 1] << " 값이 들어 갔습니다." << endl;
}

int Stack::Pop()
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

Stack::Stack()
{
	data = new int[1];
	data[0] = -99;
	count = 0;
}

Stack::~Stack()
{
	
}
