#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace chrono;




struct dominoT{
    int leftDots;
    int rightDots;
};

bool FormsDominoChain(vector<dominoT>& dominos, int left, int right, deque<pair<int,int>>&ans);

bool isValid(deque<pair<int,int>>ans){
    sort(ans.begin(), ans.end());
    for(int i = 1; i < ans.size(); ++i){
        if(ans[i-1].first == ans[i].first && ans[i-1].second == ans[i].second){
            return false;
        }
    }
    return true;
}

vector<bool>vis(1e5);
int main(){
    int n; cin >> n;
    vector<dominoT>domino;
    for(int i = 0; i < n; ++i){
        dominoT d;
        cin >> d.leftDots >> d.rightDots;
        domino.push_back(d);
    }
    deque<pair<int,int>>ans;
    ans.push_front({domino[0].leftDots, domino[0].rightDots});
    vis[0] = true;
    cout << endl;
    clock_t start, end;
    //auto start = high_resolution_clock :: now();
    start = clock();
    bool ok = FormsDominoChain(domino, domino[0].leftDots, domino[0].rightDots, ans);
    end = clock();
    //auto stop = high_resolution_clock :: now();
    cout << ok << endl;

    if(ok){
        for(int i = 0; i < n; ++i){
            if(i != n-1)
                cout << ans[i].first << "|" << ans[i].second << " -> ";
        }
        cout << ans[n-1].first << "|" << ans[n-1].second << endl;
    }
    
   double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
}


bool FormsDominoChain(vector<dominoT>& dominos, int left, int right, deque<pair<int,int>>&ans){

    for(int i = 0; i < dominos.size(); ++i){
        if(vis[i])continue;
        if(dominos[i].leftDots == right){
            vis[i] = true;
            ans.push_back({dominos[i].leftDots, dominos[i].rightDots});
            FormsDominoChain(dominos, ans.begin()->first, ans.rbegin()->second, ans); 
        }
        else if(dominos[i].rightDots == left){
            vis[i] = true;
            ans.push_front({dominos[i].leftDots, dominos[i].rightDots});
            FormsDominoChain(dominos, ans.begin()->first, ans.rbegin()->second, ans);
        }
        else if(dominos[i].rightDots == right){
            vis[i] = true;
            ans.push_back({dominos[i].rightDots, dominos[i].leftDots});
            FormsDominoChain(dominos, ans.begin()->first, ans.rbegin()->second, ans);
        }
        else if(dominos[i].leftDots == left){
            vis[i] = true;
            ans.push_front({dominos[i].rightDots, dominos[i].leftDots});
            FormsDominoChain(dominos, ans.begin()->first, ans.rbegin()->second, ans);
        }
    }

    if(ans.size() >= dominos.size()){
        return true;
    }
    else{
        return false;
    }

}

/*
6 6
5 6
5 5
4 6
4 5
4 4
3 6
3 5
3 4
3 3
2 6
2 5
2 4
2 3
2 2
1 6
1 5
1 4 
1 3
1 2
1 1
0 6
0 5
0 4
0 3
0 2
0 1
0 0


28
0 0
0 1
0 2
0 3
0 4
0 5
0 6
1 1
1 2
1 3
1 4
1 5
1 6
2 2
2 3
2 4
2 5
2 6
3 3
3 4
3 5
3 6
4 4
4 5
4 6
5 5
5 6
6 6

1 4
2 6
4 4
6 1
4 3


*/