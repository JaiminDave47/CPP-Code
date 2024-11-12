// Arithmetic: +, -, *, /, %
// Relational: <, <= , >, >=, ==, != (Returns true/false)
// Logical: &&, ||, !
// Unary Operators: ++ (Increment), -- (Decrement)

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "\n";
    cout << "a + b = " << a+b << "\n";
    cout << "a - b = " << a-b << "\n";
    cout << "a * b = " << a*b << "\n";
    cout << "a / b = " << (float)a/b << "\n";
    cout << "a % b = " << a % b << "\n";

    cout << "\n";
    cout << "a > b: " << (a>b) << endl;
    cout << "a < b: " << (a<b) << endl;
    return 0;
}