#include <iostream>
#include "Time.h"
using namespace std;
/*
Time make_time(int h, int m, int s){

Time temp;

temp.hours = h;
temp.minutes = m;
temp.seconds = s;

return temp;
}

Time make_time(int s) {
	Time temp;

	temp.hours = s / 3600;
	s %= 3600;		// shortcut for s = s % 3600
	temp.minutes = s / 60;
	temp.seconds = s % 60;

	return temp;
}

Time add(Time t1, Time t2) {
	int i1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	int i2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

	return make_time(i1 + i2);
}

// void print(Time t)

void print(Time& t) {
	cout << t.hours << ":" << t.minutes << ":" << t.seconds << endl;
}

void read(Time* t) {
	cout << "Please enter the hours: ";
	cin >> t->hours;

	cout << "Please eneter the minutes: ";
	cin >> t->minutes;

	cout << "Please enter the seconds: ";
	cin >> t->seconds;
}*/


//CLASS VERSION 

Time :: Time(int h, int m, int s) {			//(This function is defined in the scope of the Time class through use of :: symbol)
	hours = h;
	minutes = m;
	seconds = s;
}

Time::Time(int s) {
	hours = s / 3600;
	s %= 3600;
	minutes = s / 60;
	seconds = s % 60;
}

Time Time::add(Time t2) {
	int i1 = hours * 3600 + minutes * 60 + seconds;		//can also express assumption through 'this->hours'
	int i2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

	return Time(i1 + i2);
}

void Time::print() {
	cout << hours << ":" << minutes << ":" << seconds << endl;
}

void Time::read() {
	cout << "Please enter the hours: ";
	cin >> hours;

	cout << "Please enter the minutes: ";
	cin >> minutes;

	cout << "PLeease enter the seconds: ";
	cin >> seconds;
}
