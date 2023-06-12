#include<bits/stdc++.h>
#include<fstream>
using namespace std;

ifstream file1("x1.txt");
ifstream file2("x2.txt");
bool ok = true;

void compareChar(){
    int line = 1;
    while(!file1.eof() || !file2.eof()){
        char ch1 = file1.get();
        char ch2 = file2.get();
        if(ch1 == '\n')line++;
        if(ch1 == ch2) continue;
        ok = false;
        break;
    }
    if(!ok){
        cout << "NOT THE SAME" << endl;
        cout << "Line number : " << line << endl;
        cout << "Different chars : ";
        while(!file1.eof()){
            char ch = file1.get();
            cout << ch;
            if(ch == '\n') break;
        }
        cout << endl;
    }
    else{
        cout << "THEY ARE THE SAME" << endl;
    }
}

void compareWord(){
    ok = true;
    int line = 1;
    string word1, word2;
    while(!file1.eof() || !file2.eof()){
        file1 >> word1;
        file2 >> word2;
        if(file1.peek() == '\n')line++;
        if(word1 == word2) continue;
        ok = false;
        break;
    }
    if(!ok){
        cout << "NOT THE SAME" << endl;
        cout << "Line number : " << line << endl;
        cout << "First different word : ";
        cout << word1 << endl;
    }
    else{
        cout << "THEY ARE THE SAME" << endl;
    }
}

int main(){
    int n; 
    cout << "Choose 1 for char | 2 for word: ";
    cin >> n;
    if(n == 1){
        compareChar();
        cout << ok << endl;
    }
    else{
        compareWord();
        cout << ok << endl;
    }
}

