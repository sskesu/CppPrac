#include "BinaryTree.h"

void BinaryTree::AddNode(int data)
{
	if (rootNode == nullptr) {
		rootNode->data = data;
	}
	else {
		Node* temp = new Node;
		temp = rootNode;
		while (true) {
			if (data < temp->data && temp->left == nullptr) {
				Node* newNode = CreateNode(data);
				temp->left = newNode;
				break;
			}
			else if (data >= temp->data && temp->right == nullptr) {
				Node* newNode = CreateNode(data);
				temp->right = newNode;
				break;
			}
			else if (data < temp->data) {
				temp = temp->left;
			}
			else {
				temp = temp->right;
			}
		}
		
	}
}

void BinaryTree::RemoveNode(int data)
{

}

void BinaryTree::PrintAll()
{
}

Node* BinaryTree::CreateNode(int data)
{
	Node* newNode = new Node{
		nullptr,
		nullptr,
		data,
	};
	return nullptr;
}

void BinaryTree::InsertNode(Node* tree, Node* newNode)
{

}

Node* BinaryTree::DeleteNode(Node* tree, int data)
{
	if (tree->data == data) {
		delete tree;
	}
	return nullptr;
}

Node* BinaryTree::FindMin(Node* root)
{
	return nullptr;
}

void BinaryTree::InOrder(Node* root)
{
}

BinaryTree::BinaryTree()
{
	rootNode = nullptr;
}

BinaryTree::~BinaryTree()
{
}
