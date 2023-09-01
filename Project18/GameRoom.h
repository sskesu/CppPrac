#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#define MAXUSER 6

using namespace std;

typedef struct UserInfo
{
	string userName;
	int level;
	int money;
}USER;

//�濡�� �ִ� 6����� ���� ����
//�濡 ���� ���� ������ ���� ���� ���� ������ ������ ��

class GameRoom
{
private:
	//��� ����ϼ���.
	vector<USER> vectorUsers;
	list<USER> listUsers;
	map<string, USER> mapUsers;
public:
	//�濡 ���� �߰�
	bool AddUser(USER& userInfo);
	//�濡 �ִ� ���� ����(�̸�����) ���࿡ ������ ������ ���ο� ���� ����
	bool DelUser(string name);
	//�濡 ������ �ִ��� ������ Ȯ��
	bool IsEmpty();
	//���� Ǯ�� ���� �ƴ���
	bool IsFull();
	//���õ�(�̸�) ���� ���� Ȯ��
	USER& GetUserInfo(string name);
	//������(index) ���� ���� Ȯ��
	USER& GetUserInfo(int index);
	//���� ���� Ȯ��
	USER& GetMasterUserInfo();
	//������ ������ ���� Ȯ��
	USER& GetLastUserInfo();
	//Ư�� ������ ���� ���� ����
	bool BanUser(int index);
	//��� ���� ���� ����
	void Clear();
	//�� �ο� üũ
	int Count();
};