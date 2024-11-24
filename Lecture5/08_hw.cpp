// Write a program to print n terms of fibonacci series.

#include<iostream>
using namespace std;

int fib(int n){
    int a = 0, b = 1, c;
    for(int i = 0; i <= n; i++){
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    fib(n);
    return 0;
}