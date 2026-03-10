#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;

    vector<int> hashMap(26, 0);
    int n = input.length();

    for(int i=0; i<n; i++){
        hashMap[input[i] - 'A']++;
    }

    string leftPart = "";
    string rightPart = "";
    string middlePart = "";

    for(int i=0; i<26; i++){
        if(hashMap[i] == 0)
            continue;

        if(hashMap[i] % 2 == 0){
            string addPart(hashMap[i]/2, 'A' + i);

            leftPart = addPart + leftPart;
            rightPart = rightPart + addPart;
        }

        else if(hashMap[i] % 2 != 0 && middlePart.empty()){
            middlePart = 'A' + i;

            string addPart((hashMap[i]-1)/2, 'A' + i);

            leftPart = addPart + leftPart;
            rightPart = rightPart + addPart;
        }

        else{
            cout << "NO SOLUTION" << endl;
            exit(0);
        }
    }

    cout << leftPart + middlePart + rightPart << endl;
    return 0;

}