// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "divisible by: ";
    cin >> n;
    for(int i = 4; i <= n; i = i + 4){
        cout << i << ' ' << endl;
    }
}