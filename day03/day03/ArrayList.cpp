#include "ArrayList.h"

void ArrayList::AddNode(int _data)
{
    count++;
    if (count == 1) {
        data = new int[1];
        data[0] = _data;
    }
    else {
        int* temp = new int[count];
        for (int i = 0; i < count; i++) {
            temp[i] = data[i];
        }
        temp[count - 1] = _data;

        delete data;

        data = temp;
    }
    cout << data[count - 1] << " ���� �־����ϴ�." << endl;
}

void ArrayList::InsertNode(int _index, int _data)
{
    count++;
    if (count == 1) {
        data = new int[1];
        data[0] = _data;

        cout << data[count - 1] << " ���� �־����ϴ�." << endl;
        return ;
    }
    else if (count <= _index) { // �� ������ ����
        int* temp = new int[count];
        for (int i = 0; i < count; i++) {
            temp[i] = data[i];
        }
        temp[count - 1] = _data;

        delete data;

        data = temp;

        cout << count << "��° �ڸ��� " << data[count - 1] << " ���� �־����ϴ�." << endl;
    }
    else if (_index <= 0) { //�� ÷�� ����
        int* temp = new int[count];
        for (int i = 0; i < count; i++) {
            temp[i + 1] = data[i];
        }
        temp[0] = _data;

        delete data;

        data = temp;

        cout << "1��° �ڸ��� " << data[0] << " ���� �־����ϴ�." << endl;
    }
    else {
        int* temp = new int[count];
        for (int i = 0; i < _index - 1; i++) {
            temp[i] = data[i];
        }
        temp[_index - 1] = _data;
        for (int i = _index; i < count; i++) {
            temp[i] = data[i - 1];
        }

        delete data;

        data = temp;

        cout << _index << "��° �ڸ��� " << data[_index - 1] << " ���� �־����ϴ�." << endl;
    }
}

void ArrayList::InsertNode(int _index, int _count, int _data)
{
    for (int i = 0; i < _count; i++) {
        count++;
        if (count == 1) {
            data = new int[1];
            data[0] = _data;

            cout << data[count - 1] << " ���� �־����ϴ�." << endl;
            return;
        }
        else if (count <= _index) { // �� ������ ����
            int* temp = new int[count];
            for (int i = 0; i < count; i++) {
                temp[i] = data[i];
            }
            temp[count - 1] = _data;

            delete data;

            data = temp;

            cout << count << "��° �ڸ��� " << data[count - 1] << " ���� �־����ϴ�." << endl;
        }
        else if (_index <= 0) { //�� ÷�� ����
            int* temp = new int[count];
            for (int i = 0; i < count; i++) {
                temp[i + 1] = data[i];
            }
            temp[0] = _data;

            delete data;

            data = temp;

            cout << "1��° �ڸ��� " << data[0] << " ���� �־����ϴ�." << endl;
        }
        else {
            int* temp = new int[count];
            for (int i = 0; i < _index - 1; i++) {
                temp[i] = data[i];
            }
            temp[_index - 1] = _data;
            for (int i = _index; i < count; i++) {
                temp[i] = data[i - 1];
            }

            delete data;

            data = temp;

            cout << _index << "��° �ڸ��� " << data[_index - 1] << " ���� �־����ϴ�." << endl;
        }
    }

}

void ArrayList::UpdateNode(int _index, int _data)
{
    data[_index - 1] = _data;

    cout << _index << "��° ���� " << _data << "�� �����߽��ϴ�." << endl;
}

void ArrayList::DeleteNodeData(int _data)
{
    for (int i = count - 1; i >= 0; i--) {
        if (data[i] == _data) {
            count--;
            int* temp = new int[count];
            for (int j = 0; j < i; j++) {
                temp[j] = data[j];
            }
            for (int j = i; j < count; j++) {
                temp[j] = data[j + 1];
            }
            delete data;

            data = temp;
        }
    }
    cout << "���� " << _data << "�� ��带 ��� �����߽��ϴ�." << endl;
}

void ArrayList::DeleteIndex(int _index)
{
    count--;
    int* temp = new int[count];
    for (int i = 0; i < _index - 1; i++) {
        temp[i] = data[i]; 
    }
    for (int i = _index - 1; i < count; i++) {
        temp[i] = data[i + 1]; 
    }
    delete data;

    data = temp;

    cout << _index << "��° ���� �����߽��ϴ�." << endl;
}

void ArrayList::ClearAllNode()
{
    count = 0;
    data = nullptr;
}

int ArrayList::GetNodeData(int _index)
{
    return data[_index - 1];
}

int ArrayList::GetListSize()
{
    return count;
}

bool ArrayList::IsEmpty()
{
    if (count == 0) {
        return true;
    }
    return false;
}

void ArrayList::PrintAll()
{
    if (count == 0) {
        cout << "�迭�� �����ϴ�." << endl;
    }
    else {
        for (int i = 0; i < count; i++) {
            cout << i + 1 << "��° �� : " << data[i] << endl;
        }
    }
}

ArrayList::ArrayList()
{
    data = nullptr;
    count = 0;
}

ArrayList::~ArrayList()
{
    delete data;
}
