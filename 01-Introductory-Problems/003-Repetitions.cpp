#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();

    int maxLenght = 1, currLenght = 1;
    char currChar = s[0];
    for(int i=1; i<n; i++){
        if(currChar == s[i]){
            currLenght++;
        }
        else{
            maxLenght = max(maxLenght, currLenght);
            currChar = s[i];
            currLenght = 1;
        }
    }
    maxLenght = max(maxLenght, currLenght);

    cout << maxLenght << endl;
}