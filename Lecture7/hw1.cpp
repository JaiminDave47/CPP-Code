// Figure out how to find if a number is power of 2 without using any loop

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    if((n > 0) && (n & (n-1)) == 0){
        cout << "Power of 2." << endl;
    } else {
        cout << "Not a power of 2." << endl;
    }
    return 0;
}