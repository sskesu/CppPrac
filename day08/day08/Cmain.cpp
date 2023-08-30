#include "HashMap.h"

int main() {

	HashMap HM;

	HM.Add(3, 1);
	HM.Add(13, 2);
	HM.Add(23, 3);
	HM.Add(33, 4);

	int num = HM.GetValue(3);
	cout << num << endl;
	num = HM.GetValue(13);
	cout << num << endl;

	num = HM.Count();
	cout << num << endl;

	HM.Remove(13);
	num = HM.Count();
	cout << num << endl;

	HM.Clear();
	num = HM.Count();
	cout << num << endl;
	return 0;
}