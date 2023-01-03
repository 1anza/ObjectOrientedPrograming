#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int value;

public:
	Integer(int v = 0) : value(v) {}

	void print() const { cout << value; }
	void println() const { cout << value; }

	Integer add(const Integer& right) const { return (value + right.value); }
	Integer sub(const Integer& right) const { return (value - right.value); }
	Integer mult(const Integer& right) const { return (value * right.value); }
	Integer div(const Integer& right) const { return (value/right.value); }

	string to_string() { return std::to_string(value); }
	bool equals(int right) const { return (value == right); }
	bool equals(const Integer right) const { return (value == right.value); }

	static Integer valueof(int i) { return i; }
	static Integer valueof(string s) { return stoi(s); }

};