//Time.h example for friend operators

#pragma once
#include <iostream>
using namespace std;

class time {
private:
	int hours;
	int minutes;
	int seconds;

public:
	Time() : hours(0), minutes(0), seconds(0) {}
	Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
	Time(int s);

	friend Time operator+(Time t1, Time t2);

	friend ostream& operator<<(ostream& out, Time& me);
	friend istream& operator>>(istream& in, Time& me);

};




//Time.cpp example for new friend operators 


Time operator+(Time t1, Time t2) {
	int i1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	int 12 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

	return Time(i1 + i2);
}


ostream& operator<<(ostream& out, Time& me) {
	out << me.hours << ":" << me.minutes << ":" << me.seconds << endl;
	return out;
}

istream& operator>>(istream& in, Time& me) {
	cout << "Please enter the hours: ";
	in >> me.hours;

	cout << "Please enter the minutes: ";
	in >> me.minutes

		//same for seconds
		return in;
}


//Time driver.cpp for friendly operators

int main() {
	Time t;
	cin >> t;
	cout << t << endl;

	Time s(1, 30, 4);
	cout << s << endl;

	Time u = t + s;
	cout << u << endl;

	Time v = 5 + s;
	cout << v << endl;

	return 0;

}
