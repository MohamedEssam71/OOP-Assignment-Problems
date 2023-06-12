#include<bits/stdc++.h>

#define  ali517 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define yes cout<<"YES \n"
#define no  cout<<"NO \n"
#define pp(x) push_back(x)
#define fe first
#define se second
//#define int long long
#define EPS 1e-6
const ll N = 5e4 + 5;

using namespace std;
int dx[8] = {-1, 1, 0, 0, 1, -1, -1, 1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

map<string, int> words_Of_Phishing{{"update your password",             3},
                                   {"your password is about to expire", 3},
                                   {"trial",                            2},
                                   {"click on the link below",          3},
                                   {"giveaway",                         2},
                                   {"earn extra cash",                  3},
                                   {"unlimited",                        2},
                                   {"official",                         2},
                                   {"sale",                             3},
                                   {"verify",                           2},
                                   {"urgent",                           3},
                                   {"don't miss out",                   3},
                                   {"free",                             2},
                                   {"cancel it anytime",                3},
                                   {"offer",                            2},
                                   {"deal",                             1},
                                   {"work",                             2},
                                   {"request",                          2},
                                   {"expire",                           2},
                                   {"get out of debt",                  3},
                                   {"there is no risk",                 3},
                                   {"fees",                             2},
                                   {"cheap",                            1},
                                   {"rate",                             2},
                                   {"certified",                        3},
                                   {"ad",                               1},
                                   {"bonus",                            2},
                                   {"lifetime",                         2},
                                   {"cards accepted",                   2},
                                   {"google",                           2}};


void solve() {
    map<string, int> occurrence;
    string textFileName;
    cout << "Enter The File Name You Want to Open: " << endl;
    cin >> textFileName;
    textFileName += ".txt";
    ifstream myFile(textFileName);
    cin.clear();
    cin.sync();
    string sentence;

    for (auto word: words_Of_Phishing) {
        while (getline(myFile, sentence)) {
            transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
            for (int i = 0; i < sentence.size(); ++i) {
                if (sentence[i] == word.first[0]) {
                    if (sentence.substr(i, word.first.size()) == word.first) {
                        occurrence[word.first]++;
                        i += word.first.size() - 1;

                    }
                }
            }

        }
        myFile.close();
        myFile.open(textFileName);
    }
    cout << setw(10)  << left << "Word" << setw(3)  << left << " " << "Number of occurrence" << setw(3) << left  << " "  << "total point" << endl;
    ll total = 0;
    for (auto word: occurrence) {
        total += word.second * words_Of_Phishing[word.first];
        cout << setw(21) << left << word.first << setw(20) << left << word.second << setw(5) << left  << word.second * words_Of_Phishing[word.first] << endl;
    }
    cout << "Total Points : " << total << endl;
    if (total >= 20) {
        cout << "the file is risky to trust " << endl;
    } 
    else cout << "it is safe" << endl;

}

signed main() {
    //ali517
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}