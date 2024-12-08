// Binary to Decimal

#include<iostream>
using namespace std;

int decimal(int bin){
    int dec = 0, pow = 1;
    while(bin != 0){
        dec += (bin%10)*pow;
        pow *= 2;
        bin /= 10;
    }
    return dec;
}

int main(){
    int bin;
    cout << "Enter a Binary number: ";
    cin >> bin;
    cout << bin << " in Decimal number system: " << decimal(bin) << endl;
    return 0;
}