// Vector Functions
// 1. size
// 2. push_back
// 3. pop_back
// 4. front
// 5. back
// 6. at
// 7. capacity

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;

    for(int val : vec){
        cout << val << endl;
    }
    return 0;
}