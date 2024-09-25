/*
Problem statement
Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.

For example:
'N' = 5.
The divisors of 5 are 1, 5.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
10
Sample Output 1 :
1 2 5 10
Explanation of Sample Input 1:
The divisors of 10 are 1,2,5,10.

Sample Input 2 :
6
Sample Output 2 :
1 2 3 6
Explanation of Sample Input 2:
The divisors of 6 are 1, 2, 3, and 6.
Constraints :
1 <= 'N' <= 10^5 
*/


#include <bits/stdc++.h> 
using namespace std;

//Start of Solution Function

int* printDivisors(int n, int &size) {
    // Allocate memory for
    // the array of divisors
    int *divisors = new int[n]; 
     // Initialize the count of divisors
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            // Add the divisor to the array
            divisors[count++] = i; 
        }
    }
    // Update the size parameter
    // with the count of divisors
    size = count; 
    // Return the array of divisors
    return divisors; 
}
//End of Solution Function


int main() {
    int number = 12;
    int size;
    int *divisors = printDivisors(number, size);

    cout << "Divisors of " << number << " are: ";
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << std::endl;

    delete[] divisors;

    return 0;
}