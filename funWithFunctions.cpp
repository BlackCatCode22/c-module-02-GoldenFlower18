#include <iostream>
using namespace std;

// Function that prompts the user to enter an integer and returns it.
int getAnIntFromTheUser() {
    int userInt;
    cout << "Please enter an integer: ";
    cin >> userInt;
    return userInt;
}

// Function that compares two integers and prints the comparison result.
void compareTwoInts(int a, int b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
}

// Function that returns the sum of two integers.
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    // Get two integers from the user
    cout << "Enter first integer:" << endl;
    int num1 = getAnIntFromTheUser();

    cout << "Enter second integer:" << endl;
    int num2 = getAnIntFromTheUser();

    // Compare the two integers
    compareTwoInts(num1, num2);

    // Sum the two integers and display the result
    int sum = sumTwoInts(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}
