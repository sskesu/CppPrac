#include "Deque.h"

int main() {
	/* 스택
	Stack stack;

	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);

	int num = stack.Pop();
	cout << num << " 이(가) 나왓습니다." << endl;

	num = stack.Pop();
	cout << num << " 이(가) 나왓습니다." << endl;

	num = stack.Count();
	cout << "stack에 " << num << "개가 남았습니다." << endl;

	if (!stack.IsEmpty()) {
		cout << "자료가 남아 있어 자료를 지우겠습니다." << endl;
		stack.Clear();
	}

	num = stack.Count();
	cout << "stack에 " << num << "개가 남았습니다." << endl;
	*/

	/* 큐
	Queue queue;

	queue.Enqueue(1);
	queue.Enqueue(2);
	queue.Enqueue(3);
	queue.Enqueue(4);
	queue.Enqueue(5);

	int num = queue.Dequeue();
	cout << num << " 이(가) 나왔습니다." << endl;

	num = queue.Dequeue();
	cout << num << " 이(가) 나왔습니다." << endl;

	num = queue.Count();
	cout << "Queue에 " << num << "개가 남았습니다." << endl;

	if (!queue.IsEmpty()) {
		cout << "자료가 남아 있어 자료를 지우겠습니다." << endl;
		queue.Clear();
	}

	num = queue.Count();
	cout << "Queue에 " << num << "개가 남았습니다." << endl;
	*/

	Deque deque;

	deque.Push_Back(1);
	deque.Push_Back(2);
	deque.Push_Back(3);

	deque.PrintAll();

	deque.Push_Front(4);
	deque.Push_Front(5);
	deque.Push_Front(6);

	deque.PrintAll();

	int num = deque.Pop_Back();
	cout << num << " 이(가) 나왔습니다." << endl;

	num = deque.Pop_Back();
	cout << num << " 이(가) 나왔습니다." << endl;

	num = deque.Pop_Front();
	cout << num << " 이(가) 나왔습니다." << endl;

	num = deque.Pop_Front();
	cout << num << " 이(가) 나왔습니다." << endl;

	deque.PrintAll();

	num = deque.Count();
	cout << "Queue에 " << num << "개가 남았습니다." << endl;

	if (!deque.IsEmpty()) {
		cout << "자료가 남아 있어 자료를 지우겠습니다." << endl;
		deque.Clear();
	}

	num = deque.Count();
	cout << "Queue에 " << num << "개가 남았습니다." << endl;

	return 0;
}
