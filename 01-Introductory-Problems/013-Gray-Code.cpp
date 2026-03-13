#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> grayCodeSeq(int n){
    if(n == 1){
        return {"0", "1"};
    }
    if(n <= 0){
        return {};
    }

    vector<string> prevSeq = grayCodeSeq(n-1);
    vector<string> prevSeqReversed = prevSeq;
    reverse(prevSeqReversed.begin(), prevSeqReversed.end());

    int size = prevSeq.size();
    for(int i=0; i<size; i++){
        prevSeq[i] = "0" + prevSeq[i];
        prevSeqReversed[i] = "1" + prevSeqReversed[i];
    }

    for(auto it: prevSeqReversed){
        prevSeq.push_back(it);
    }

    return prevSeq;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> grayCodeSequence = grayCodeSeq(n);

    for(auto it: grayCodeSequence){
        cout << it << endl;
    }

    return 0;
}