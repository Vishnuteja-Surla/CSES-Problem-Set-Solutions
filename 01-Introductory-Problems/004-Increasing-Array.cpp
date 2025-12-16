#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> numArr(n);
    for(long long i=0; i<n; i++){
        cin >> numArr[i];
    }

    long long minMoves = 0;
    long long currentElement = numArr[0];
    for(long long i=1; i<n; i++){
        if(numArr[i] < currentElement){
            minMoves += currentElement - numArr[i];
            continue;
        }
        currentElement = numArr[i];
    }

    cout << minMoves << endl;

    return 0;
}