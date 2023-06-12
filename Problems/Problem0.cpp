#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    getline(cin, s);
    int n = s.size();
    bool space = false;
    int i = 0, j = 0; string temp = "";
    vector<string>ans;
    while(j < n){
        if(s[j] != ' '){
            if(space){
                ans.push_back(temp);
                space = false;
                temp = "";
            }
            else{
               temp += s[j++]; 
            }
        }
        else{
            space = true;
            j++;
        }
    }
    ans.push_back(temp);
    for(int i = 0; i < ans.size(); ++i){
        for(int j = 0; j < ans[i].size(); ++j){
            if(i == 0 && j == 0) ans[i][j] = toupper(ans[i][j]);
            else ans[i][j] = tolower(ans[i][j]);
        }
        cout << ans[i] << " ";
    }
    

}