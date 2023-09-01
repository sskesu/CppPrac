#include "GameRoom.h"

bool GameRoom::AddUser(USER& userInfo)
{
    if (!IsFull()) {
        vectorUsers.push_back(userInfo);
        vector<USER>::iterator iter = vectorUsers.begin();
        cout << "User Name : " << iter->userName << endl;
        cout << "User Level : " << iter->level << endl;
        cout << "User Money : " << iter->level << endl;
        return true;
    }
    
    return false;
}

bool GameRoom::DelUser(string name)
{

    return false;
}

bool GameRoom::IsEmpty()
{
    if (vectorUsers.size() == 0) {
        return true;
    }
    return false;
}

bool GameRoom::IsFull()
{
    if (vectorUsers.size() == MAXUSER) {
        return true;
    }
    return false;
}

USER& GameRoom::GetUserInfo(string name)
{
    vector<USER>::iterator iter;
    for (iter = vectorUsers.begin(); iter != vectorUsers.end(); iter++) {
        if (iter->userName == name) {
            USER A = {
                iter->userName,
                iter->level,
                iter->money
            };
            return A;
        }
    }
}

USER& GameRoom::GetUserInfo(int index)
{
    vector<USER>::iterator iter = vectorUsers.begin();
    for (int i = 0; i < index; i++) {
        iter++;
    }
    USER A = {
        iter->userName,
        iter->level,
        iter->money
    };
    return A;
}

USER& GameRoom::GetMasterUserInfo()
{
    // TODO: insert return statement here
}

USER& GameRoom::GetLastUserInfo()
{
    // TODO: insert return statement here
}

bool GameRoom::BanUser(int index)
{
    return false;
}

void GameRoom::Clear()
{
}

int GameRoom::Count()
{
    return 0;
}