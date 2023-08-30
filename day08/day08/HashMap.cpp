#include "HashMap.h"

void HashMap::Add(int key, int value)
{
    if (table[key % TABLE_SIZE] == nullptr) {
        Node* temp = new Node{
            key,
            value,
            nullptr
        };
        table[key % TABLE_SIZE] = temp;
    }
    else {
        int num = key % TABLE_SIZE; //num = 3
        while (table[num] != nullptr) {
            num++; // num = 4
            if (num == TABLE_SIZE) {
                num = 0;
            }
        }
        Node* temp = new Node{
            key,
            value,
            nullptr
        };
        table[num] = temp; 
    }
}

int HashMap::GetValue(int key)
{
    int num = 0;
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i] != nullptr) {
            if (table[i]->key == key) {
                return table[i]->data;
            }
        }
    }
}

void HashMap::Remove(int key)
{
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i] != nullptr) {
            if (table[i]->key == key) {
                table[i] = nullptr;
                break;
            }
        }
    }
}

int HashMap::Count()
{
    int count = 0;
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i] != nullptr) {
            count++;
        }
    }
    return count;
}

void HashMap::Clear()
{
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = nullptr;
    }
}

HashMap::HashMap()
{
    table = new Node * [TABLE_SIZE];

    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = nullptr;
    }
}

HashMap::~HashMap()
{
    delete table;
}