#pragma once
#include <iostream>
using namespace std;

class Glass{
private:
	static int pours;

	int volume;
	int amount;

public:
	Glass(int volume, int amount) : volume(volume), amount(amount) {}
	int getVolume() { return volume; }
	int getAmount() { return amount; }
	void display() { cout << amount << " / " << volume << endl; }
	static int getPours() { return pours; }

	void pour(Glass& source);
};

