#include<bits/stdc++.h>
using namespace std;

bool s = false;

bool bears(int n){
    if(s) return true;
    if(n == 42){
        s = true;
        return true;
    }
    if(n > 42){
        if(n % 2 == 0){
            bears(n/2);
            if(s)return true;
        }
        if(n % 3 == 0 || n % 4 == 0){
            int last1 = n % 10;
            int last2 = (n % 100) / 10;
            if(last1 * last2 != 0)
                bears(n - (last1 * last2));
            if(s)return true;
        }
        if(n % 5 == 0){
            bears(n-42);
            if(s) return true;
        }
    }
    else return false;
}

int main(){
    int n; cin >> n;
    bool ans = bears(n);
    cout << (ans == 1 ? 1 : 0);
}

