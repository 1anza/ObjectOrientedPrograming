#include <iostream>
#include "Time.h"
using namespace std;
/*
int main() {
	// Time t = make_time(3666);
	Time t; 
	read(&t);
	print(t);

	Time s = make_time(1, 30, 4);
	print(s);

	Time u = add(t, s);
	print(u);
	return 0;
}*/


int main() {
	Time t;
	t.read();
	t.print();			//Print yourself Mr T

	Time s(1, 30, 4);
	s.print();

	Time u = t.add(s);
	u.print();

	return 0;
}