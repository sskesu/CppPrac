#include "BinaryTree.h"

void BinaryTree::AddNode(int data)
{
	Node* newNode = CreateNode(data);
	if (rootNode == nullptr) {
		rootNode = newNode;
	}
	else {
		InsertNode(rootNode, newNode);
	}
}

void BinaryTree::RemoveNode(int data)
{
	if (rootNode->data == data) {
		rootNode->data = -99;
	}
	else {
		Node* newNode = new Node;
		Node* temp = new Node;
		newNode = rootNode;
		
		while (true) {
			if (newNode->data > data) {
				temp = newNode->left;
				if (temp->data == data) {
					temp = DeleteNode(temp, data);
					delete newNode->left;
					newNode->left = temp;
					break;
				}
				newNode = temp;
			}
			else {
				temp = newNode->right;
				if (temp->data == data) {
					temp = DeleteNode(temp, data);
					delete newNode->right;
					newNode->right = temp;
					break;
				}
				newNode = temp;
			}
		}
	}
}

void BinaryTree::PrintAll()
{
	InOrder(rootNode);
}

Node* BinaryTree::CreateNode(int data)
{
	Node* newNode = new Node{
		nullptr,
		nullptr,
		data,
	};
	return newNode;
}

void BinaryTree::InsertNode(Node* tree, Node* newNode)
{
	if (tree->data > newNode->data) {
		if (tree->left == nullptr) {
			tree->left = newNode;
		}
		else {
			InsertNode(tree->left, newNode);
		}
	}
	else {
		if (tree->right == nullptr) {
			tree->right = newNode;
		}
		else {
			InsertNode(tree->right, newNode);
		}
	}

}

Node* BinaryTree::DeleteNode(Node* newNode, int data)
{
	Node* temp = new Node;

	if (newNode->left == nullptr && newNode->right == nullptr) {
		temp = nullptr;
	}
	else if (newNode->left != nullptr && newNode->right == nullptr) {
		temp = newNode->left;
	}
	else if (newNode->left == nullptr && newNode->right != nullptr) {
		temp = newNode->right;
	}
	else {

	}
	return temp;
}

Node* BinaryTree::FindMin(Node* root)
{
	return nullptr;
}

void BinaryTree::InOrder(Node* root)
{
	if (root == nullptr) {
		return;
	}

	InOrder(root->left);
	cout << root->data << endl;
	InOrder(root->right);
}

BinaryTree::BinaryTree()
{
	rootNode = nullptr;
}

BinaryTree::~BinaryTree()
{
}
