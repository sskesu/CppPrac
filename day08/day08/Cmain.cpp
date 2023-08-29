#include "HashMap.h"

int main() {

	HashMap HM;

	HM.Add(3, 1);
	HM.Add(13, 2);
	HM.Add(23, 3);
	HM.Add(33, 4);
	// [-99][-99][-99][1][2][3][4][-99][-99][-99]
	int num = HM.GetValue(13);

	num = HM.Count();
	cout << num << endl;



	return 0;
}