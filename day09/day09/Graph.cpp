#include "Graph.h"

void Graph::InitializeGraph(int nodeCount)
{
    graph[nodeCount] = {};
    for (int i = 0; i < nodeCount; i++) {
        graph[i] = CreateNode(i);
    }
}

void Graph::AddEdge(int from, int to)
{
    Node* newNode = CreateNode(to);
    Node* temp = graph[from]->next;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void Graph::DeleteEdge(int node, int deleteEdge)
{
    Node* temp = new Node;
    temp = graph[node];
    while ((temp->next)->data != deleteEdge) {
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

void Graph::ShowGraphEdge(int node)
{
    Node* temp = graph[node]->next;
    while (temp != nullptr) {
        cout << node << " -> " << temp->data << endl;
        temp = temp->next;
    }
    
    cout << "天天天天天" << endl;
}

Node* Graph::CreateNode(int data)
{
    Node* newNode = new Node{
        data,
        nullptr
    };
    return newNode;
}

Graph::Graph()
{
}

Graph::~Graph()
{
}
