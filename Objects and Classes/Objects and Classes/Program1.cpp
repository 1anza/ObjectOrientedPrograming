#include "Double.h"
#include <iostream>
#include <string>
#pragma once
using namespace std;


int main()
{
	Double i0;
	cout << "Constructor and println pass if 0 prints: ";
	i0.println();

	Double i1(5);
	cout << "Constructor and println pass if 5 prints: ";
	i1.println();

	cout << "equals: " << ((i0.equals(0.0)) ? "PASS" : "FAIL") << endl;
	cout << "equals: " << (i1.equals(Double(5.0)) ? "PASS" : "FAIL") << endl;

	i0.print();
	cout << " and ";
	i1.print();
	cout << " :print Passes if 0 and 5 and this statement print on the same line" << endl;

	Double i2(2.0);
	Double i3;

	i3 = i1.add(i2);
	cout << "add: " << ((i3.equals(7)) ? "PASS" : "FAIL") << endl;

	i3 = i1.sub(i2);
	cout << "sub: " << ((i3.equals(3)) ? "PASS" : "FAIL") << endl;

	i3 = i1.mult(i2);
	cout << "mult: " << ((i3.equals(10)) ? "PASS" : "FAIL") << endl;

	i3 = i1.div(i2);
	cout << "div: " << ((i3.equals(2.0)) ? "PASS" : "FAIL") << endl;

	cout << "string representation: " + i3.to_string() + " should allow concatenation" << endl;

	i3 = Double::valueof(25);
	cout << "valueof: " << ((i3.equals(25)) ? "PASS" : "FAIL") << endl;

	i3 = Double::valueof("50");
	cout << "valueof: " << ((i3.equals(50)) ? "PASS" : "FAIL") << endl;

	return 0;
}