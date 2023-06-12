#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,string>>scorePlayer;
    scorePlayer.push_back({100,"Bill"});
    scorePlayer.push_back({100,"Bill"});    
    scorePlayer.push_back({99,"Bob"});
    for(int i = 0; i < 10; ++i){
        scorePlayer.push_back({54,"BME"});
    }
    
    bool error = true;
    do{
        int n;
        
        cout << "\t" << "1. Add New Player." << endl;
        cout << "\t" << "2.Dsiplay top 10 Player." << endl;
        cout << "\t" << "3.Display one Player." << endl;
        cout << "\t" << "4.Exit." << endl;
        cout << "Choose ya Zft: ";
        cin >> n;
        string name; int score; bool found = false, foundTop = false;
        int number;
        switch(n){
            case 1:
                cout << "Enter Player Name: ";
                cin >> name;
                cout << "Enter Score : ";
                cin >> score;
                sort(scorePlayer.rbegin(), scorePlayer.rend());
                if(scorePlayer[scorePlayer.size() - 1].first < score){
                    scorePlayer.push_back({score,name});
                    sort(scorePlayer.rbegin(), scorePlayer.rend());
                    scorePlayer.pop_back();
                }
                else{
                    cout << "Player is not in the top 10" << endl;
                }
                
                break;
                
            case 2:
                sort(scorePlayer.rbegin(), scorePlayer.rend());
                for(int i = 0; i < 10; ++i){
                    cout << scorePlayer[i].second << " " << scorePlayer[i].first << endl;
                }
                break;
                
            case 3:
                cout << "Enter name you want : ";
                cin >> name;
                sort(scorePlayer.rbegin(), scorePlayer.rend());
                for(int i = 0; i < 10; ++i){
                    if(scorePlayer[i].second == name){
                        foundTop = true;
                        number = i+1;
                        score = scorePlayer[i].first;
                        break;
                    }
                }
                for(auto pair : scorePlayer){
                    if(pair.second == name){
                        found = true;
                        break;
                    }
                }
                if(foundTop){
                    cout << "Found in " << number << " Place" << endl;
                    cout << name << " highest score is " << score << endl;
                }
                else if(found && !foundTop){
                    cout << "Player is not found in top 10" << endl;
                }
                else{
                    cout << "Player is not input yet! " << endl;
                }

                break;

            case 4:
                error = false;
                break;
        }
    }while(error);

}
