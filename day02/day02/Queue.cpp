#include "Queue.h"

void Queue::Clear()
{
    count = 0;
    data = nullptr;

}

int Queue::Count()
{
    return count;
}

bool Queue::IsEmpty()
{
    if (count == 0) {
        return true;
    }

    return false;
}

void Queue::Enqueue(int _data)
{
    count++;
    if (count == 1) {
        data[0] = _data;
    }
    else { // count >=2
        int* temp = new int[count];
        for (int i = 0; i < count; i++) {
            temp[i] = data[i];
        }
        temp[count - 1] = _data;
        delete data;

        data = temp;
    }
    cout << data[count - 1] << " 값을 넣었습니다." << endl;
}

int Queue::Dequeue()
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

Queue::Queue()
{
    data = new int[1];
    data[0] = -99;
    count = 0;

}

Queue::~Queue()
{
    delete data;
}
