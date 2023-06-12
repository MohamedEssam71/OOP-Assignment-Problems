#include<bits/stdc++.h>
using namespace std;

vector<string>split(string target, string delimiter);

int main(){
    string a = "do re mi fa so la ti do";
    string b = " ";
    for(auto val : split(a,b)){
        cout << val << " ";
    }
    cout << endl;

}

vector<string>split(string target, string delimiter){
    vector<string>ans;
    string temp = ""; int n = target.size();
    for(int i = 0; i < n; ++i){
        if(target[i] != delimiter[0]){
            temp += target[i];
        }
        else{
            ans.push_back(temp);
            temp = "";
        }
    }   
    ans.push_back(temp);
    return ans;
}
