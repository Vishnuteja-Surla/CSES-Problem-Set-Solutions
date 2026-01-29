#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int count = 0;

    while(n >= 5){
        n = n / 5;
        count += n;
    }

    cout << count << endl;
}