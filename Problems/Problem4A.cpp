#include<bits/stdc++.h>
using namespace std;


void binaryPrint(int n){

    if(n == 0) return; 


    binaryPrint(n/2);


    cout << n%2;
    
}

int main(){
    int n; cin >> n;
    cout << "Output: ";
    if(n == 0) cout << 0;
    else binaryPrint(n);
}

