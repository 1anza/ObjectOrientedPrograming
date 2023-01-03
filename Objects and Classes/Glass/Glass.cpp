#include "Glass.h"
#include <algorithm>
using namespace std;

int Glass::pours = 0;

void Glass::pour(Glass& source) {
	pours++;

	int space = volume - amount;
	int transfer = min(space, source.amount);
	
	amount += transfer;
	source.amount -= transfer;
}
