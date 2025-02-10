// largestOfThree.cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    // Ask the user for three integers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    
    int largest;  // Variable to store the largest number

    // Use nested if statements to determine the largest integer
    if (num1 >= num2) {
        // If num1 is greater than or equal to num2, compare num1 with num3
        if (num1 >= num3) {
            largest = num1;  // num1 is the largest
        } else {
            largest = num3;  // num3 is larger than num1
        }
    } else {
        // If num2 is greater than num1, compare num2 with num3
        if (num2 >= num3) {
            largest = num2;  // num2 is the largest
        } else {
            largest = num3;  // num3 is larger than num2
        }
    }
    
    // Output the largest integer
    cout << "The largest integer is: " << largest << endl;
    return 0;
}
