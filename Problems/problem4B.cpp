#include<bits/stdc++.h>
using namespace std;


void binaryPrint(string s, int n){
    
    if(n == 0){
        cout << s << endl;
        return;
    }

    binaryPrint(s+'0', n-1);


    binaryPrint(s+'1', n-1);


}

int main(){
    string s; cin >> s;
    int n; cin >> n;
    binaryPrint(s,n);
}

//return;
// }
    // s.push_back('0'); 
    // binaryPrint(s, --n);
    // s.pop_back();
// s.push_back('1');
    // binaryPrint(s,n);
    // s.pop_back();