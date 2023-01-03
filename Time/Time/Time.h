#pragma once

/*struct Time {
	int hours;
	int minutes;
	int seconds;
};

Time make_time(int h, int m, int s);
Time make_time(int s);
Time add(Time t1, Time t2);		//pass by value
//void print(Time t);			//pass by value
void print(Time& t);			//pass by reference
void read(Time* t);				//pass by pointer/address */

class Time {
private:
	int hours;
	int minutes;
	int seconds;

public:
	//Time() { hours = 0; minutes = 0; seconds = 0; }				//must make default constructor. Then define function inside the class
	Time() : hours(0), minutes(0), seconds(0) {}		//another way to write it, still need a body, so adding brackets to end
	Time(int h, int m, int s); //: hours(h), minutes(m), seconds(s) {} Another way to write an initializer list. Only constructors allowed to do this 
	Time(int s);
	
	Time add(Time t2);

	void print();
	void read();
};