#include<bits/stdc++.h>
using namespace std;

void pattern06(int n){
    for(int i=1;i <= n;i++){
        for(int j=1; j< n- i+1 ; j++){
            cout<< j <<" "  ;
        }
        cout << endl;
    }

    }
int main(){

int n ;
cin >> n;


pattern06(n);


return 0;
}