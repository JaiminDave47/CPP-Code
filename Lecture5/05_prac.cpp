// Calculate nCr binomial coefficient for n & r (n > r).

#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    return (fact(n)) / (fact(r)*fact(n-r));
}

int main(){
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    if(n > r){
        cout << "nCr: " << nCr(n, r) << endl;
    } else{
        cout << "Enter valid values (n > r)";

    }
    return 0;
}