// Check if a number is prime or not.

#include<iostream>
using namespace std;

int main(){
    int n, factors = 0;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            factors++;
        }
    }
    if(factors == 1){
        cout << n << " is a prime number.\n";
    } else{
        cout << n << " is not a prime number.\n";
    }
    return 0;
}