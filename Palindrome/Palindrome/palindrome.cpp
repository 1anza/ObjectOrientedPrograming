#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    cout << "Please enter a palindrome: " << endl;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
        while (input[i] == ' ')
            input.erase(i, 1);

    for (int j = 1; ; j++) {

        int i;

        for (i = 0; i < input.length() / 2; i++) {
            if (input[i] != input[input.length() - 1 - i])
                break;
        }

        if (i == input.length() / 2) {
            cout << "(" << input << ")" << " Is a Palindrome!" << endl;
            break;
        } else {
            cout << ":( Not a Palindrome" << endl;
            break;
        }
    }
    return 0;
}