// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void pattern17(int n){
    for(int i=0;i<=n;i++){
   for(char ch='E'-i;ch <='E';ch++){
       cout << ch << " ";
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