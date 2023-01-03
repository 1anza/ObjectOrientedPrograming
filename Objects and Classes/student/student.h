#pragma once
#include <string>
#include <iostream>
using namespace std;

class student{
private:
	string name;
	int webernumber;

public:
	//student(string n, int i);
	student(string n, int i)
		:name(n), webernumber(i) {}
	//void display();
	void display() { cout << name << " " << webernumber << endl; }
};

