#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "UKR");
	cout << "��������\n   1 ����� ���������� �����������\n   2 ����� ���������� �������������\n";
	int a;
	cin >> a;
	if (a == 1) {
		Triangle t;
		t.Draw();
	}
	else if (a == 2) {
		Hexagon t;
		t.Draw();
	}
	cout << endl;
	system("pause");
	return 0;
}