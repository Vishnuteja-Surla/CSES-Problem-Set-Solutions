#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,int>> t(2*n);
    for(int i=0; i<2*n-1; i=i+2){
        cin >> t[i].first >> t[i+1].first;
        t[i].second = 1;
        t[i+1].second = -1;
    }

    sort(t.begin(), t.end());

    int maxOverlap = 0, overlap = 0;

    for(int i=0; i < 2 * n; i++){
        overlap += t[i].second;
        maxOverlap = max(maxOverlap, overlap);
    }

    cout << maxOverlap << endl;

    return 0;
}