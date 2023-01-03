#include <iostream>
#include "sterling.h"
using namespace std;

int main() {
	sterling s;
	read(&s);
	print(s);

	sterling d = make_sterling(1, 8, 6);
	print(d);

	sterling u = add(s, d);
	print(u);
	return 0;
}