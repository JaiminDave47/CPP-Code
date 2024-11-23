// Function to calculate sum of two numbers.

#include<iostream>
using namespace std;

int calcSum(int a, int b);

int main(){
    int a, b, sum;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    sum = calcSum(a, b); // Arguments
    cout << "Sum of a & b: " << sum;
    return 0;
}

int calcSum(int a, int b){ // Parameter
    int s = a + b;
    return s;
}