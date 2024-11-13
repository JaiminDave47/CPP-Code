// Find a if a character is lowercase or uppercase

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout << ch << " is an uppercase character.\n";
    } else if(ch >= 'a' && ch <= 'z'){
        cout << ch << " is a lowercase character.\n";
    } else{
        cout << "Enter a character from alphabets.\n";
    }
    return 0;
}