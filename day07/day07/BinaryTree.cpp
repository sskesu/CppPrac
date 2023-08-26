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
		if (rootNode->left == nullptr || rootNode->right == nullptr) {
			Node* temp = new Node;
			temp = DeleteNode(rootNode, data);
			delete rootNode;
			rootNode = temp;
		}
		else {
			Node* temp = rootNode->left;
			Node* temp2 = temp->right;
			
			if (temp2 == nullptr) {
				temp2 = rootNode->right;
				delete rootNode;
				rootNode = temp;
			}
			else {

				while (temp2->right != nullptr) {
					temp = temp2;
					temp2 = temp->right;
				}
				if (temp2->left == nullptr) {
					temp2->left = rootNode->left;
					temp2->right = rootNode->right;
					delete rootNode;
					rootNode = temp2;
					temp->right = nullptr;
				}
				else {
					temp->right = temp2->left;
					temp2->left = rootNode->left;
					temp2->right = rootNode->right;
					delete rootNode;
					rootNode = temp2;
					
				}
			}
			
		}
	}
	else {
		Node* newNode = new Node;
		Node* temp = new Node;
		newNode = rootNode;
		
		while (true) {
			if (newNode->data > data) {
				temp = newNode->left;
				if (temp->data == data) {
					if (temp->left == nullptr || temp->right == nullptr) {
						temp = DeleteNode(temp, data); 
						delete newNode->left;
						newNode->left = temp;
						break;
					}
					else {
						temp = DeleteNode(temp, data);
						if (temp != (newNode->left)->left) {
							temp->left = (newNode->left)->left;
						}
						if (temp != (newNode->left)->right) {
							temp->right = (newNode->left)->right;
						}
						delete newNode->left;
						newNode->left = temp;
						break;
					}
				}
				newNode = temp;
			}
			else {
				temp = newNode->right;
				if (temp->data == data) {
					if (temp->left == nullptr || temp->right == nullptr) {
						temp = DeleteNode(temp, data);
						delete newNode->right;
						newNode->right = temp;
						break;
					}
					else {
						temp = DeleteNode(temp, data);
						if (temp != (newNode->right)->left) {
							temp->left = (newNode->right)->left;
						}
						if (temp != (newNode->right)->right) {
							temp->right = (newNode->right)->right;
						}
						delete newNode->right;
						newNode->right = temp;
						break;
					}
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
		temp = newNode->left; 
		temp = DeleteNode(temp, data);
		if (temp == nullptr) {
			temp = newNode->left;
		}
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
