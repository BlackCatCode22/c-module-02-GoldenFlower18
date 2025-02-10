#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input); // Read the whole line (allows spaces)

    // Check if the user entered an empty string
    if (input.empty()) {
        cout << "You did not enter any text." << endl;
    } else {
        // Reverse the string
        string reversed = "";
        // Loop from the end of the string to the beginning
        for (int i = input.size() - 1; i >= 0; i--) {
            reversed += input[i];
        }
        cout << "Reversed string: " << reversed << endl;
    }
    
    return 0;
}
