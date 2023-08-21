#include "HashMap.h"

void HashMap::Add(int key, int value)
{
    Node* temp = new Node;
    temp = *table;
    for (int i = 0; i < (key % TABLE_SIZE); i++) {
        temp = temp->hashNext;
    }
    while (true) {
        if (temp->key == -99) {
            break;
        }
        temp = temp->hashNext;
    }
    temp->key = key;
    temp->data = value;
}

int HashMap::GetValue(int key)
{
    Node* temp = new Node;
    temp = *table;
    while (temp->key != key) {
        temp = temp->hashNext;
    }
    return temp->data;
}

void HashMap::Remove(int key)
{
    Node* temp = new Node;
    temp = *table;
    while (temp->key != key) {
        temp = temp->hashNext;
    }
    temp->key = -99;
    temp->data = -999;
}

int HashMap::Count()
{
    Node* temp = new Node;
    temp = *table;
    int count = 0;
    while (true) {
        if (temp->data != -999) {
            count++;
        }
        temp = temp->hashNext;
        if (temp == *table) {
            break;
        }
    }

    return count;
}

void HashMap::Clear()
{
}

HashMap::HashMap()
{
    Node* temp = new Node;
    temp->key = -99;
    temp->data = -999;
    table = &temp;
    for (int i = 1; i < TABLE_SIZE; i++) {
        Node* newNode = new Node;
        newNode->key = -99;
        newNode->data = -999;
        temp->hashNext = newNode;
        temp = newNode;
    }
    temp->hashNext = *table;
}

HashMap::~HashMap()
{
    Node* temp = new Node;
    temp = *table;
    for (int i = 0; i < TABLE_SIZE; i++) {
        *table = (*table)->hashNext;
        delete temp;
        temp = *table;
    }
    delete temp;
    delete table;
}
