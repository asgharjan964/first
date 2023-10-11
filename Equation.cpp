#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    for (int i = 1; i<=n*2; i++){
        if(i == 1){
            cout << 1 << endl;
        }
        else if(i%2 != 0){
            cout << pow(i,2)-(i-2) << endl;
        }
    }
    return 0;
}
