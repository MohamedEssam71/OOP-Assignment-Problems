#include<bits/stdc++.h>
using namespace std;

void pattern(int n, int i){
    if(n == 0) 
        return;

    pattern(n/2,i);

    for(int j = 0; j < i; ++j){
        cout << "  ";
    }

    for(int j = 0; j < n; ++j){
        cout << "* ";
    }

    cout << endl;
    
    pattern(n/2, i + n/2);
}

int main(){
    pattern(8,0);
}



