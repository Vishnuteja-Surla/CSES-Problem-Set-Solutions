#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<int> b(m);
    for(int j=0; j<m; j++){
        cin >> b[j];
    }

    int satisfiedCustomers = 0;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;

    while(j < m && i < n){
        if(b[j] > a[i] + k){
            /*
            The smallest left apartment is bigger than what our current customer is expecting.
            A customer with a bigger apartment requirement maybe interested in it.
            */
            i++;
        }
        else if(b[j] < a[i] - k){
            /*
            The current apartment is smaller than what our customer with smallest requirement is expecting.
            No customer would want this apartment so let us skip it.
            */
            j++;
        }
        else{
            // There is a customer who is willing to take this apartment.
            satisfiedCustomers++;
            i++;
            j++;
        }
    }

    cout << satisfiedCustomers << endl;
}