// Decimal to Binary

#include<iostream>
using namespace std;

int binary(int n){
    int bin = 0, pow = 1;
    while(n > 0){
        bin += pow*(n % 2);
        n /= 2;
        pow *= 10;
    }
    return bin;
}

int main(){
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << num << " in binary number system: " << binary(num) << endl;
    return 0;
}