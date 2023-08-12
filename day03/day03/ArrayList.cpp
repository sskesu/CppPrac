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
    cout << data[count - 1] << " 값을 넣었습니다." << endl;
}

void ArrayList::InsertNode(int _index, int _data)
{
    count++;
    if (count == 1) {
        data = new int[1];
        data[0] = _data;

        cout << data[count - 1] << " 값을 넣었습니다." << endl;
        return ;
    }
    else if (count <= _index) { // 젤 마지막 삽입
        int* temp = new int[count];
        for (int i = 0; i < count; i++) {
            temp[i] = data[i];
        }
        temp[count - 1] = _data;

        delete data;

        data = temp;

        cout << count << "번째 자리에 " << data[count - 1] << " 값을 넣었습니다." << endl;
    }
    else if (_index <= 0) { //젤 첨에 삽입
        int* temp = new int[count];
        for (int i = 0; i < count; i++) {
            temp[i + 1] = data[i];
        }
        temp[0] = _data;

        delete data;

        data = temp;

        cout << "1번째 자리에 " << data[0] << " 값을 넣었습니다." << endl;
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

        cout << _index << "번째 자리에 " << data[_index - 1] << " 값을 넣었습니다." << endl;
    }
}

void ArrayList::InsertNode(int _index, int _count, int _data)
{
    for (int i = 0; i < _count; i++) {
        count++;
        if (count == 1) {
            data = new int[1];
            data[0] = _data;

            cout << data[count - 1] << " 값을 넣었습니다." << endl;
            return;
        }
        else if (count <= _index) { // 젤 마지막 삽입
            int* temp = new int[count];
            for (int i = 0; i < count; i++) {
                temp[i] = data[i];
            }
            temp[count - 1] = _data;

            delete data;

            data = temp;

            cout << count << "번째 자리에 " << data[count - 1] << " 값을 넣었습니다." << endl;
        }
        else if (_index <= 0) { //젤 첨에 삽입
            int* temp = new int[count];
            for (int i = 0; i < count; i++) {
                temp[i + 1] = data[i];
            }
            temp[0] = _data;

            delete data;

            data = temp;

            cout << "1번째 자리에 " << data[0] << " 값을 넣었습니다." << endl;
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

            cout << _index << "번째 자리에 " << data[_index - 1] << " 값을 넣었습니다." << endl;
        }
    }

}

void ArrayList::UpdateNode(int _index, int _data)
{
    data[_index - 1] = _data;

    cout << _index << "번째 값을 " << _data << "로 변경했습니다." << endl;
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
    cout << "값이 " << _data << "인 노드를 모두 제거했습니다." << endl;
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

    cout << _index << "번째 값을 제거했습니다." << endl;
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
        cout << "배열이 없습니다." << endl;
    }
    else {
        for (int i = 0; i < count; i++) {
            cout << i + 1 << "번째 값 : " << data[i] << endl;
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
