#include<bits/stdc++.h>
using namespace std;

void pattern07(int n){
    for(int i=0;i < n;i++){
        for(int j=0;j< n-i-1;j++){
            cout <<" ";
        }
        for(int j=0; j < 2*i+1;j++){
            cout <<"*";
        }

        for(int j=0;j< n-i-1;j++){
                            cout <<" ";

        }

        cout << endl;
    }

    }
void pattern08(int n){
    for(int i=0;i < n;i++){

        for(int j=0; j<i; j++){
            cout << " ";
        }

        for(int j=0; j< 2*n-(2*i+1); j++){
            cout << "*";
        }
        for(int j=0; j<i; j++){
            cout << " ";
        }


        cout << endl;
    }

    }	
int main(){

int n ;
cin >> n;


pattern07(n);
pattern08(n);


return 0;
}




