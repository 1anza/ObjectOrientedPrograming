#pragma once
#include <iostream>
#include <string>
using namespace std;

class Double {
private:
	double value;

public:
	Double(double v = 0.0) : value(v) {}

	void print() const { cout << value; }
	void println() const { cout << value; }

	Double add(const Double& right) const { return (value + right.value); }
	Double sub(const Double& right) const { return (value - right.value); }
	Double mult(const Double& right) const { return (value * right.value); }
	Double div(const Double& right) const { return (value / right.value); }

	string to_string() { return std::to_string(value); }
	bool equals(double right) const { return (value == right); }
	bool equals(const Double right) const { return (value == right.value); }

	static Double valueof(double i) { return i; }
	static Double valueof(string s) { return stoi(s); }

};