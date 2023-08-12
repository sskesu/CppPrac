#include "Deque.h"

int main() {
	/* ����
	Stack stack;

	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);

	int num = stack.Pop();
	cout << num << " ��(��) ���ӽ��ϴ�." << endl;

	num = stack.Pop();
	cout << num << " ��(��) ���ӽ��ϴ�." << endl;

	num = stack.Count();
	cout << "stack�� " << num << "���� ���ҽ��ϴ�." << endl;

	if (!stack.IsEmpty()) {
		cout << "�ڷᰡ ���� �־� �ڷḦ ����ڽ��ϴ�." << endl;
		stack.Clear();
	}

	num = stack.Count();
	cout << "stack�� " << num << "���� ���ҽ��ϴ�." << endl;
	*/

	/* ť
	Queue queue;

	queue.Enqueue(1);
	queue.Enqueue(2);
	queue.Enqueue(3);
	queue.Enqueue(4);
	queue.Enqueue(5);

	int num = queue.Dequeue();
	cout << num << " ��(��) ���Խ��ϴ�." << endl;

	num = queue.Dequeue();
	cout << num << " ��(��) ���Խ��ϴ�." << endl;

	num = queue.Count();
	cout << "Queue�� " << num << "���� ���ҽ��ϴ�." << endl;

	if (!queue.IsEmpty()) {
		cout << "�ڷᰡ ���� �־� �ڷḦ ����ڽ��ϴ�." << endl;
		queue.Clear();
	}

	num = queue.Count();
	cout << "Queue�� " << num << "���� ���ҽ��ϴ�." << endl;
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
	cout << num << " ��(��) ���Խ��ϴ�." << endl;

	num = deque.Pop_Back();
	cout << num << " ��(��) ���Խ��ϴ�." << endl;

	num = deque.Pop_Front();
	cout << num << " ��(��) ���Խ��ϴ�." << endl;

	num = deque.Pop_Front();
	cout << num << " ��(��) ���Խ��ϴ�." << endl;

	deque.PrintAll();

	num = deque.Count();
	cout << "Queue�� " << num << "���� ���ҽ��ϴ�." << endl;

	if (!deque.IsEmpty()) {
		cout << "�ڷᰡ ���� �־� �ڷḦ ����ڽ��ϴ�." << endl;
		deque.Clear();
	}

	num = deque.Count();
	cout << "Queue�� " << num << "���� ���ҽ��ϴ�." << endl;

	return 0;
}
