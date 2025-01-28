// Vector memory is allocated Dynamically (On run time)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    for(char val : vec){ //for each loop
        cout << val << ' ';
    }
    cout << endl;
    for(int i = 0; i <= 2; i++){ //normal 'for' loop
        cout << vec[i] << ' ';
    }
    return 0;
}