// Ternary statements
// condition ? stt1: strr2;

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    n >= 0 ? cout << "n is positive" : cout << "n is negative";
    return 0;
}