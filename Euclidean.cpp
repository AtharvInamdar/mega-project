#include <bits/stdc++.h>
using namespace std;


int findGCD(int num1, int num2)
{
    if (num1 == 0)
        return num2;
    return findGCD(num2 % num1, num1);
}

int main()
{

    int num1, num2;
    cout << "Enter 2 numbers to find GCD" << endl;
    cin >> num1 >> num2;

    int gcd = findGCD(num1, num2);
    cout << "GCD is " << gcd << endl;

    return 0;
}
crt
body
[object Object]
 
 
 
 
 
 
 
 
 
Enter 2 numbers to find GCD
1
0
0
1
GCD is 
 
modulo does not exits

 inverse is:
0
