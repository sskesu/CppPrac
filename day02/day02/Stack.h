#pragma once
#include <iostream>

using namespace std;

class Stack
{
private:
	//해당 배열을 가르키는 포인터
	//해당 배열의 주소를 담는 포인터
	int* data;
	//데이터 갯수
	int count;
public:
	//자료를 지워주는 함수
	void Clear();
	//몇개인지 알려주는 함수
	int Count();
	//비어 있는지 아닌지 알려주는 함수
	bool IsEmpty();
	//값을 넣어주는 함수(_data)
	void Push(int _data);
	//값을 빼주는 함수
	//빼면서 값을 반환
	int Pop();
public:
	Stack();
	~Stack();
};

