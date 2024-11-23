// Write a function chech if a number is prime or not.

#include<iostream>
using namespace std;

int isPrime(int n){
    int factors = 0;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            factors++;
        }
    }
    if(factors == 0 && n != 1){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isPrime(num)){
        cout << num << " is a Prime number.\n";
    } else{
        cout << num << " is not a Prime number.\n";
    }
    return 0;
}