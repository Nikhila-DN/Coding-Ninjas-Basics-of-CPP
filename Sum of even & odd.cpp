/*
Problem statement
Write a program to input an integer N and print the sum of all its even digits and all its odd digits separately.

Digits mean numbers, not the places! If the given integer is "13245", the even digits are 2 and 4, and the odd digits are 1, 3, and 5.

Detailed explanation ( Input/output format, Notes, Images )
Constraints
0 <= N <= 10^8

Sample Input 1:
1234
Sample Output 1:
6 4

Sample Input 2:
552245
Sample Output 2:
8 15
Explanation for Sample Input 2:
Considering the input provided, we can identify the even digits as 2, 2, and 4. If we add these even digits together, we get 8 (2 + 2 + 4). Similarly, for the odd digits, which are 5, 5, and 5, their sum is 15 (5 + 5 + 5). Therefore, the answer is expressed as 8(evenSum) followed by a single space and then 15 (oddSum).
*/

// Sum of even & odd

#include <iostream>
using namespace std;

int main() {
    
    int n, odd, even=0, digit=0;

    cin>>n;

    while(n>0){
        digit=n%10;
        n=n/10;
        if(digit%2==0)
        even+=digit;
        else
        odd+=digit;
    }
    
    //output sum of even & odd numbers separately
    cout<<even<<" "<<odd;


    return 0;
}