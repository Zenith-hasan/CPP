// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void pattern17(int n){
    for(int i=0; i< n;i++){
        for(int j=0; j<n;j++){
            if (i == 0 || j == 0 || i == n-1 || j == n-1){
                cout <<"*";
            }
            else cout <<" ";
        }
        cout << endl;
    }

    
}
  

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    pattern17(n);

    return 0;
}