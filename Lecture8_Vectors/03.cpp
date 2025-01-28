// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// n ^ n = 0
// n ^ 0 = n

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int single_num = 0;
    vector<int> vec = {4, 1, 2, 1, 2};
    for(int val : vec){
        single_num ^= val;
    }
    cout << "Single number = " << single_num << endl;
    return 0;
}