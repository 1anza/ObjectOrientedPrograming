#pragma once

struct sterling {
	int pounds;
	int shillings;
	int pence;
};

sterling make_sterling(int l, int s, int d);
sterling make_sterling(int d);
sterling add(sterling s1, sterling s2);		//pass by value
void print(sterling s);			//pass by value
void read(sterling* s);				//pass by pointer/address