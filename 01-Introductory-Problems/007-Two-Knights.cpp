#include<bits/stdc++.h>
using namespace std;

/*
Total ways of arrangement for two knights in a k*k board is k^2C2 = (k^2)(k^2-1)/2
Total ways of attack = 2 * (No of 3*2 squares fit in k*k + No of 2*3 squares fit in k*k)
Total ways of attack = 2 * ((k-1)(k-2) + (k-1)(k-2)) = 4(k-1)(k-2)
*/


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    for(long long k=1; k<=n; k++){
        long long totalWays = (k*k) * (k*k - 1)/2;
        long long attackingWays = max((long long)0, 4 * (k-1) * (k-2));
        cout << totalWays - attackingWays << endl;
    }

    return 0;
}