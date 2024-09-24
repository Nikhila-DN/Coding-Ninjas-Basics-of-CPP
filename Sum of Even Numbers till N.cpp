/*
Problem statement
Given a number N, print sum of all even numbers from 1 to N.

Detailed explanation ( Input/output format, Notes, Images )

Constraints :
 1 <= N <= 10ˆ4 

Sample Input 1 :
 6
Sample Output 1 :
12
Explanation of Sample Input 1:
The even numbers from 1 to 6 are: 2, 4, 6, So adding these 3 numbers give a sum of 12.
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum=0;

    // input number
    cin>>n;

    //Sum of even numbers
    for(int i=0;i<=n;i++){
        if(i%2==0)
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}