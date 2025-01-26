#include <bits/stdc++.h>
using namespace std;

// Function to reverse a number
int reverseNumber(int n) {
    int reverse = 0;
    while (n > 0) {
        int digit = n % 10;        // Extract the last digit
        reverse = reverse * 10 + digit;  // Build the reversed number
        n /= 10;                  // Remove the last digit
    }
    return reverse;
}

int main() {
    vector<int> numbers = {123, 456, 789}; // List of numbers
    int totalSum = 0; // Variable to store the total sum

    for (int num : numbers) {  // Iterate through each number in the list
        int reversed = reverseNumber(num);  // Reverse the number using the function
        cout << "Reversed: " << reversed << endl;  // Print the reversed number
        totalSum += reversed;  // Add the reversed number to the total sum
    }

    cout << "Sum of reversed numbers: " << totalSum << endl; // Output the total sum
    return 0;
}
