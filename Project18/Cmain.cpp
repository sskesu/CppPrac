#include <iostream>
#include "GameRoom.h"

using namespace std;

int main() {
	
	GameRoom GR;
	USER A = {
		"����1",
		1,
		10
	};

	GR.AddUser(A);

	return 0;
}