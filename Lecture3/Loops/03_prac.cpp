// Sum of all odd numbers from 1 to N.

#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    int i = 1;
    while(i <= n){
        if(i % 2 != 0){
            sum += i;
        }
        i++;
    }
    cout << "Sum of all odd numbers from 1 to N: " << sum;
    return 0;
}