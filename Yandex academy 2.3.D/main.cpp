#include <iostream>
using namespace std;

bool leap_year(int year);

int main() {
	int month, year;
	cin >> month >> year;
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "31";
		break;
	case 2:
		cout << 28 + leap_year(year);
		break;
	case 4: case 6: case 9: case 11:
		cout << "30";
		break;
	}
	return 0;
}

bool leap_year(int year) {
	if ((year % 400) == 0) {
		return true;
	}
	else if ((year % 100) == 0) {
		return false;
	}
	else if ((year % 4) == 0) {
		return true;
	}
	return false;
}