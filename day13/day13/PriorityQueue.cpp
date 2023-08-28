#include "PriorityQueue.h"

bool PriorityQueue::IsEmpty()
{
    if(count >= 1){
        return false;
    }
    return true;
}

void PriorityQueue::Push(int _priority, int _data)
{
    if (IsEmpty()) {
        count++;
        heap[count].priority = _priority;
        heap[count].data = _data;
    }
    else {
        count++;
        heap[count].priority = _priority;
        heap[count].data = _data;
        int num = count;
        while (GetParentIndex(num) != 0) {
            if (heap[num].priority > heap[GetParentIndex(num)].priority) {
                Swap(num, GetParentIndex(num));
                num = GetParentIndex(num);
            }
            else {
                break;
            }
        }
    }
}

Node PriorityQueue::Pop()
{
    heap[1].priority = heap[count].priority;
    heap[1].data = heap[count].data;

    heap[count].priority = -99;
    heap[count].data = -99;

    count--;

    int num = 1;
    while (num <= count / 2) {
        if (heap[num].priority < heap[GetChildIndex(num)].priority) {
            Swap(num, GetChildIndex(num));
            num = GetChildIndex(num);
        }
        else {
            break;
        }
    }

    return Node();
}

int PriorityQueue::Count()
{
    return count;
}

void PriorityQueue::PrintAll()
{
    for (int i = 1; i <= count; i++) {
        cout << heap[i].data << endl;
    }
}

int PriorityQueue::GetChildIndex(int selfIndex)
{
    if (heap[selfIndex * 2].priority >= heap[selfIndex * 2 + 1].priority) {
        return selfIndex * 2;
    }
    return selfIndex * 2 + 1;
}

int PriorityQueue::GetParentIndex(int selfIndex)
{
    return selfIndex / 2;
}

int PriorityQueue::GetLeftChildIndex(int selfIndex)
{
    return selfIndex * 2;
}

int PriorityQueue::GetRightChildIndex(int selfIndex)
{
    return selfIndex * 2 + 1;
}

void PriorityQueue::Swap(int firstIndex, int secondIndex)
{
    Node temp;

    temp.priority = heap[firstIndex].priority;
    temp.data = heap[firstIndex].data;

    heap[firstIndex].priority = heap[secondIndex].priority;
    heap[firstIndex].data = heap[secondIndex].data;

    heap[secondIndex].priority = temp.priority;
    heap[secondIndex].data = temp.data;

    //¹Ù²Þ
}

PriorityQueue::PriorityQueue()
{
    count = 0;
    heap[MaxCount];
    for (int i = 0; i < MaxCount; i++) {
        heap[i].data = -99;
        heap[i].priority = -99;
    }
}
