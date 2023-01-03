#include <iostream>
#include "Glass.h"
using namespace std;

int main() {
	Glass glasses[3]{ Glass(3, 0), Glass(5, 0), Glass(8, 8) };		//left number represents glass oz, right number represent oz of water in glass

	while (glasses[1].getVolume() != 4 && glasses[2].getVolume() != 4){		//
		
		for (int i = 0; i < 3; i++) {
			cout << "Glass " << i + 1 << ": ";	//no endl, building up... i + 1 changes index from 0-2 to 1-3 for better input readability.
			glasses[i].display();
		}

		int destination;

		cout << "Pour TO glass: < 1, 2, or 3; or enter 4 to quit >:  ";
		cin >> destination;

		if (destination == 4)
			exit(0);

		int source;

		cout << "Pour FROM glass: < 1, 2, or 3; or enter 4 to quit >:  ";
		cin >> source;

		if (source == 4)
			exit(0);

		if (source > 0 && source <= 3 && destination > 0 && destination <= 3)		//safeguards on user input to avoid mistakes and protect against vector attacks resulting in virus
			glasses[destination - 1].pour(glasses[source - 1]);
		else
			cout << "0 < destination <= 3 AND 0 < source <= 3" << endl;
	}

	cout << "\n\nYou solved the puzzle in " << Glass::getPours() << " pours" << endl;

	for (int i = 1; i < 3; i++)
		glasses[i].display();

	return 0;
}