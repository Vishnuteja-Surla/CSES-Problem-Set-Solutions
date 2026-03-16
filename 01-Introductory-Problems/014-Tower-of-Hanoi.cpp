#include<iostream>
#include<cmath>
using namespace std;

void towerOfHanoi(int n, int src, int des, int aux){
    if(n == 0){
        return;
    }

    towerOfHanoi(n-1, src, aux, des);
    cout << src << " " << des << endl;
    towerOfHanoi(n-1, aux, des, src);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << pow(2, n) - 1 << endl;

    towerOfHanoi(n, 1, 3, 2);
}