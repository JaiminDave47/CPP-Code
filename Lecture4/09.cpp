// Hollow Diamond
/*
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;

    // Top
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << '*';
        for(int j = 0; j < (2*i)-1; j++){
            cout << " ";
        }
        if(i > 0){
            cout << '*';
        }
        cout << endl;
    }
    
    // Bottom
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < i+1; j++){
            cout << " ";
        }
        cout << '*';
        if(i != n-2){
            for(int j = 0; j < 2*((n-2)-i)-1; j++){
                cout << " ";
            }
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
