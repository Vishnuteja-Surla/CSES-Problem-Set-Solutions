#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long currNum;
    long long totalSum = 0;

    for(long long i=0; i<n-1; i++){
        cin >> currNum;
        totalSum += currNum;
    }

    long long expectedSum = n * (n+1) / 2;
    cout << expectedSum - totalSum << endl;
}