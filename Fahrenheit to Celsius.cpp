/*
Fahrenheit to Celsius

Problem statement
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E), and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W into their corresponding Celsius values and print the table.

Note:
Print the floor of the Celsius values if they are non-negative else print its ceil value. 
Detailed explanation ( Input/output format, Notes, Images )

Constraints :
0 <= S <= 80
S <= E <=  900
0 <= W <= 40 

Sample Input 1:
0 
100 
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37

Sample Input 2:
20
119
13
Sample Output 2:
20  -6
33  0 
46  7
59  15
72  22
85  29
98  36
111 43
Explanation For Sample Input 2:
We need need to start calculating the Celsius values for each of the Fahrenheit Value which starts from 20. So starting from 20 which is the given Fahrenheit start value, we need to compute its corresponding Celsius value which computes to -6. We print this information as <Fahrenheit Value> a tab space"\t" <Celsius Value> on each line for each step of 13 we take to get the next value of Fahrenheit and extend this idea till we reach the end that is till 119 in this case. You may or may not exactly land on the end value depending on the steps you are taking.
*/

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //s = Start Fahrenheit Value 
    //e = End Fahrenheit value
    //w = Step Size
    int s, e, w, c;

    //input values
    cin>>s;
    cin>>e;
    cin>>w;

    //conversion Fahrenheit to Celsius
    while(s<=e){
        c=((s-32)*5)/9;
        cout<<s<<" "<<c<<endl;
        s+=w;
    }

    return 0;
}