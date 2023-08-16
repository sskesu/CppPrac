#include "SingleList.h"

void SingleList::AddNode(int _data)
{
    count++;
    Node* temp1 = new Node;
    Node* temp2 = new Node;
    temp1->data = _data;
    temp1->next = nullptr;

    temp2->next = head;

    if (count == 1) {
        head = temp1;
    }
    for (int i = 0; i < count; i++) {
        if (temp2->next == nullptr) {
            temp2->next = temp1;
        }
        else {
            temp2 = temp2->next;
        }
    }
}

void SingleList::InsertNode(int _index, int _data)
{
    count++;
    Node* temp1 = new Node;
    Node* temp2 = new Node;
    Node* temp3 = new Node;

    if (count == 1) {
        temp1->data = _data;
        temp1->next = nullptr;
        head = temp1;
    }
    else {
        temp1->next = head;
        temp3->data = _data;
        temp3->next = nullptr;
        for (int i = 0; i < _index - 1; i++) {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp3;
        temp3->next = temp2;
    }
    
}

void SingleList::UpdateNode(int _index, int _data)
{
    Node* temp = new Node;
    temp->next = head;
    for (int i = 0; i < _index; i++) {
        temp = temp->next;
    }
    temp->data = _data;
}

void SingleList::DeleteNodeData(int _data)
{
    Node* temp1 = new Node;
    Node* temp2 = new Node;

    temp1->next = head;
    temp2 = head;

    while (temp1->next != nullptr) {
        if (temp2->data == _data) {
            temp1->next = temp2->next;
            temp2 = temp1->next;
            count--;
        }
        else {
            temp1 = temp1->next;
            temp2 = temp1->next;
        }
    }
}

void SingleList::DeleteIndex(int _index)
{
    count--;
    Node* temp1 = new Node;
    Node* temp2 = new Node;
    
    temp1->next = head;
    temp2 = head;
    
    for (int i = 1; i < _index; i++) {
        temp1 = temp1->next;
        temp2 = temp1->next;
    }

    temp1->next = temp2->next;
    if (_index == 1) {
        head = temp1->next;
    }
}

void SingleList::ClearAllNode()
{
    head = nullptr;
    count = 0;
}

int SingleList::GetNodeData(int _index)
{
    Node* temp = new Node;
    temp->next = head;

    for (int i = 0; i < _index; i++) {
        temp = temp->next;
    }
    return temp->data;
}

int SingleList::GetListSize()
{
    return count;
}

bool SingleList::IsEmpty()
{
    if (count == 0) {
        return true;
    }
    return false;
}

void SingleList::PrintAll()
{
    Node* temp;
    temp = head;
    for (int i = 0; i < count; i++) {
        cout << i + 1 << "번째 값 : " << temp->data << endl;
        temp = temp->next;
    }
    if (count == 0) {
        cout << "리스트가 비어있음." << endl;
    }
}

SingleList::SingleList()
{
    head = nullptr;
    count = 0;
}

SingleList::~SingleList()
{
}
