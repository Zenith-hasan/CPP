#include<bits/stdc++.h>
using namespace std;

void pattern05(int n){

    for(int i=0; i <= n; i++){
        for(int j=0;j < n - i; j++){
            cout <<" # ";
        }
        cout << endl;
    }

}

int main(){

int n ;
cin >> n;

pattern05(n);

return 0;
}

