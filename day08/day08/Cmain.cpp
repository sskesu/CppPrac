#include "HashMap.h"

int main() {

	HashMap HM;

	HM.Add(3, 7);
	int num = HM.GetValue(3);
	//HM.Add(14, 2); // <<
	//HM.Add(4, 3);
	//
	//HM.Add(1, 4);
	//HM.Add(111, 5);
	cout << num << endl;
	//num = HM.Count();
	cout << num << endl;

	return 0;
}