#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {

    char	palindrome[1000] = "";	// empty string
    for (int i = 1; i < argc; i++)
        strcat_s(palindrome, 1000, argv[i]);

    for (int j = 1; ; j++) {

        int i;

        for (i = 0; i < strlen(palindrome) / 2; i++) {
            if (palindrome[i] != palindrome[strlen(palindrome) - 1 - i])
                break;
        }

        if (i == strlen(palindrome) / 2) {
            cout << "(" << palindrome << ")" << "  Is a Palindrome!" << endl;
            break;
        }
        else {
            cout << "(" << palindrome << ")" << "  Not a Palindrome :(" << endl;
            break;
        }
    }
}