#include "HashMap.h"

void HashMap::Add(int key, int value)
{
    Node* temp = *table;
    for (int i = 0; i < key % TABLE_SIZE; i++) {
        temp = temp->hashNext;
    }
    while (temp->key != -99) {
        temp = temp->hashNext;
    }
    temp->data = value;
    temp->key = key;
}

int HashMap::GetValue(int key)
{
    Node* temp = *table;
    while (temp->key != key) {
        temp = temp->hashNext;
    }

    return temp->data;
}

void HashMap::Remove(int key)
{
    Node* temp = *table;
    while (temp->key != key) {
        temp = temp->hashNext;
    }
    temp->data = -99;
    temp->key = -99;
}

int HashMap::Count()
{
    Node* temp = *table;
    int count = 0;
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (temp->key != -99) {
            count++;
            
        }
        temp = temp->hashNext;
    }
    return count;
}

void HashMap::Clear()
{
}

HashMap::HashMap()
{
    Node* arr[TABLE_SIZE] = {};

    for (int i = 0; i < TABLE_SIZE; i++) {
        arr[i] = new Node;
        arr[i]->data = -99;
        arr[i]->key = -99;
    }
    for (int i = 0; i < TABLE_SIZE - 1; i++) {
        arr[i]->hashNext = arr[i + 1];
    }
    arr[TABLE_SIZE - 1]->hashNext = arr[0];
    table = &arr[0];
}

HashMap::~HashMap()
{
}