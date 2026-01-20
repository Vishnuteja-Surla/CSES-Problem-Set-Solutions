#include<iostream>
using namespace std;

long long MODVALUE = 1e9+7;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long result = 1;

    for(int i=1; i<=n; i++){
        result = (result * 2) % MODVALUE;
    }

    cout << result << endl;
    return 0;
}