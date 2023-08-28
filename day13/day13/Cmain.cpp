#include "PriorityQueue.h"

int main() {
	PriorityQueue PQ;

	PQ.Push(7, 7);
	PQ.Push(10, 10);
	PQ.Push(3, 3);
	PQ.Push(16, 16);
	PQ.Push(9, 9);


	PQ.PrintAll();

	PQ.Pop();

	PQ.PrintAll();

	return 0;
}