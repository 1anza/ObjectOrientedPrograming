#include <iostream>
#include <cstring>
using namespace std;

class person {
private:
	char* name = nullptr;	//Complex class often means we need a destructor 
	int weight = 0;
	double height = 0;

public:
	person() {}																	//default constructor to help p3 in main
	person(const char* n, int w, double h);
	person(const person& p);													//copy constructor
	~person() { if (name != nullptr) delete[] name; }							//destructor
	person& operator=(const person& p);											//overloaded assignment operator
	friend ostream& operator<<(ostream& out, person& me);
};

person::person(const char* n, int w, double h) : weight(w), height(h) {
	name = new char[strlen(n) + 1];
	for (size_t i = 0; i < strlen(n) + 1; i++)	//size_t rather than unsigned, more efficient
		name[i] = n[i];

	weight = w;
	height = h;
}

person::person(const person& p) {												//copy constructor
	name = new char[strlen(p.name) + 1];
	for (size_t i = 0; i < strlen(p.name) + 1; i++)	//size_t rather than unsigned
		name[i] = p.name[i];

	weight = p.weight;
	height = p.height;
}

person& person::operator=(const person& p) {									//assignment operator
	if (&p == this)
		return *this;

	if (name != nullptr)
		delete[] name;

	name = new char[strlen(p.name) + 1];
	for (size_t i = 0; i < strlen(p.name) + 1; i++)	//size_t rather than unsigned
		name[i] = p.name[i];

	weight = p.weight;
	height = p.height;

	return *this;
}

ostream& operator<<(ostream& out, person& me) {		//Final exam will ask you to write something like this
	out << me.name << " " << me.weight << " " << me.height << endl;
	return out;
}

int main() {
	person p1("Dilbert", 175, 5.8);	//name, height, weight
		cout << p1;

	person p2(p1);
		cout << p2;

	person p3;
		p3 = p2;
		cout << p3;
	return 0;
}