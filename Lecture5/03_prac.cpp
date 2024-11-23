// N Factorial

#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Factorial of n: " << fact(n);
    return 0;
}