// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void pattern17(int n){
    int inispace = 2*n -2 ;
    for(int i=1;i<= 2*n -1 ;i++){
        int stars = i;
        if (i > n) stars = 2*n -i;
        for(int j=1; j <= stars; j++ ){
            cout << "*";
        }
        for(int j=1; j <= inispace ;j++){
            cout <<" ";
        }
        for(int j=1; j<= stars;j++){
            cout <<"*";
        }
     
        cout << endl;
        if (i < n) inispace -= 2;
        else inispace += 2;
    }
    
}
  

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    pattern17(n);

    return 0;
}