#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> x(n);

    for(int i=0; i<n; i++){
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int distinctNumbers = 1;

    for(int i=1; i<n; i++){
        if(x[i] != x[i-1]){
            distinctNumbers++;
        }
    }

    cout << distinctNumbers << endl;
}