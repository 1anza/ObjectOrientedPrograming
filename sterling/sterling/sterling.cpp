#include <iostream>
#include <iomanip>
#include "sterling.h"
using namespace std;

sterling make_sterling(int l, int s, int d) {
	sterling temp;

	temp.pounds = l;
	temp.shillings = s;
	temp.pence = d;

	return temp;
}

sterling make_sterling(int d) {
	sterling temp;

	temp.pounds = d / 240;
	d %= 240;
	temp.shillings = d / 12;
	temp.pence = d % 12;

	return temp;
}

sterling add(sterling s1, sterling s2) {

	int i1 = s1.pounds * 240 + s1.shillings * 12 + s1.pence;
	int i2 = s2.pounds * 240 + s2.shillings * 12 + s2.pence;

	return make_sterling(i1 + i2);
}


void print(sterling s) {
	if (s.shillings >= 10 && s.pence >= 10) {
		cout << (char)156 << s.pounds << '.' << s.shillings << '.' << s.pence << endl;
	}
	else {
		cout.fill('0');
		cout << (char)156 << s.pounds << '.' << setw(2) << s.shillings << '.' << setw(2) << s.pence << endl;
	}
}

void read(sterling* s) {
	cout << "Please enter Pounds: ";
	cin >> s->pounds;

	cout << "Please eneter Shillings: ";
	cin >> s->shillings;

	cout << "Please enter Pence: ";
	cin >> s->pence;
}