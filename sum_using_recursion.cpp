#include <iostream>     // Required for input/output operations
using namespace std;

// Function to calculate factorial using recursion
int factorial(int num){
    if(num == 0){
        return 1;       // Base case: factorial of 0 is 1
    }
    return num * factorial(num - 1);  // Recursive case
}

int main(){
    int num;            // Variable to store user input

    // Prompt user to enter a number
    cout << "Enter a number: ";
    cin >> num;         // Take input from user

    // Output the factorial of the entered number
    cout << "Factorial of " << num << " is: " << factorial(num);

    return 0;           // End of program
}
