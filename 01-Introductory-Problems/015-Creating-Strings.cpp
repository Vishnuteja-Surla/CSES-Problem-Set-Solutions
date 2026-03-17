#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

void recPermutations(int n, string &s, string &curr, vector<bool> &hashMap, set<string> &genStrings){
    if(curr.size() == n){
        genStrings.insert(curr);
        return;
    }

    for(int i=0; i<n; i++){
        if(!hashMap[i]){
            curr.push_back(s[i]);
            hashMap[i] = true;
            recPermutations(n, s, curr, hashMap, genStrings);
            hashMap[i] = false;
            curr.pop_back();
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int n = s.size();
    set<string> genStrings;
    vector<bool> hashMap(n, false);
    string curr = "";

    recPermutations(n, s, curr, hashMap, genStrings);

    cout << genStrings.size() << endl;
    for(auto it: genStrings){
        cout << it << endl;
    }
}