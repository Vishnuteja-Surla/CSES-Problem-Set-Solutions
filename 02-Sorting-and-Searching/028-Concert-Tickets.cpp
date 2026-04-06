#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    multiset<int> h;
    vector<int> t(m);
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        h.insert(val);
    }
    for(int j=0; j<m; j++){
        cin >> t[j];
    }

    for(int j=0; j<m; j++){
        auto it = h.upper_bound(t[j]);
        if(it != h.begin()){
            it--;
            cout << *it << endl;
            h.erase(it);
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}