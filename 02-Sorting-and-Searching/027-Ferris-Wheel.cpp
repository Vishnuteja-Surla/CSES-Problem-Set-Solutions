#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int noOfGondolas = 0;
    int i = 0, j = n-1;

    while(i < j){
        if(p[i] + p[j] <= x){
            i++;
            j--;
        }
        else{
            j--;
        }
        noOfGondolas++;
    }
    if(i == j){
        noOfGondolas++;
    }

    cout << noOfGondolas << endl;
}