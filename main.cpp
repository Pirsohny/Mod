#include "MnojinaString.h"

using namespace std;

int main() {
	string str[5];
	str[0] = "Are";
	str[1] = "You";
	str[2] = "Ready";
	str[3] = "Man";
	MnojinaString massiv(str);
    cout << "Set: " << endl << massiv << endl;
	MnojinaString massiv2(massiv);
	massiv += "Guy";
	massiv -= "Man";
	massiv2 = massiv;
	MnojinaString massiv3(str);
	cout << "Set: " << endl << massiv << endl;
	cout << "Set2: " << endl << massiv2 << endl;
	cout << "Set3: " << endl << massiv3 << endl;
	cout << "Set==Set2: ";
	if (massiv == massiv2)
		cout << "true" << endl;
	else cout << "false" << endl;
    cout << "Set==Set3: ";
    if (massiv == massiv3)
        cout << "true" << endl;
    else cout << "false" << endl;
	system("pause");
    return 0;
}
