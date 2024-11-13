#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n >= 0){
        cout << n << " is a positive number.";
    } else{
        cout << n << " is a negativ number.";
    }
    return 0;
}