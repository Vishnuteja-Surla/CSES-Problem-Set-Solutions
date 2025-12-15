#include<bits/stdc++.h>
using namespace std;

long long MODBASE = 1e9+7;

long long findNoOfWays(int n, vector<long long> &dp){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    if(n <= 6){
        int ways = 0;
        for(int i=1; i<=n; i++){
            ways = (ways + findNoOfWays(i-1, dp))%MODBASE;
        }
        ways += 1;
        return ways;
    }

    if(dp[n] != -1)
        return dp[n];

    long long ways = 0;
    for(int i=1; i<=6; i++){
        ways = (ways + findNoOfWays(n-i, dp))%MODBASE;
    }
    return dp[n] = ways;
}

int main(){
    int n;
    cin >> n;
    vector<long long> dp(n+1, -1);

    long long noOfWays = findNoOfWays(n, dp);
    cout << noOfWays << endl;
}