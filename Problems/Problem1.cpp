#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<pair<string,string>>pronoun = {{"him", "her"}, {"he", "she"}, {"himself", "herself"}};

    while(ss >> word){
        bool isCapital = false;
        string punctuation = "";
        if(ispunct(word.back())){
            punctuation += word.back();
            word.pop_back();
        }
        if(word[0] == toupper(word[0])) isCapital = true;
        for(int i = 0; i < word.size(); ++i){
            word[i] = tolower(word[i]);
        }
        string temp;
        for(int i = 0; i < pronoun.size(); ++i){
            if(word == pronoun[i].first || word == pronoun[i].second){
                
                if(isCapital){
                    temp.push_back(toupper(pronoun[i].first[0]));
                    for(int j = 1; j < pronoun[i].first.size(); ++j){
                        temp.push_back(pronoun[j].first[j]);
                    }
                    temp += " or " + pronoun[i].second;
                }
                else{
                    temp = pronoun[i].first + " or " + pronoun[i].second;
                }
            }
        }
        if(temp.empty()){
            if(isCapital){
                temp += toupper(word[0]);
                for(int i = 1; i < word.size(); ++i){
                    temp += word[i];
                }
            }
            else{
                temp = word;
            }
        }
        temp += punctuation; 
        cout << temp << " ";
    
    }
}

