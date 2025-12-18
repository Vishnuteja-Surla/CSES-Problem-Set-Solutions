#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int run=0; run<t; run++){
        long long x, y;
        cin >> y >> x;

        long long z = max(x, y);
        long long innerArea = (z-1)*(z-1);
        long long ans;

        if(z % 2 == 0){
            if(y == z){
                ans = (z*z) - (x-1);
            }
            else{
                ans = innerArea + y;
            }
        }
        else{
            if(y == z){
                ans = innerArea + y;
            }
            else{
                ans = (z*z) - (y-1);
            }
        }

        cout << ans << endl;
    }
}