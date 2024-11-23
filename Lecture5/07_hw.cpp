// Write a program to print all prime numbers from 1 to n.

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
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}