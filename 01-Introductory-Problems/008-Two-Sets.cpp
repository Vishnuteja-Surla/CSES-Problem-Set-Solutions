#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long sumOfFirstNNaturalNumbers = (n*(n+1))/2;

    if(sumOfFirstNNaturalNumbers % 2 != 0){
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    long long target = sumOfFirstNNaturalNumbers / 2;
    long long currentSum = 0;
    int i;
    vector<int> set1, set2;

    for(i=1; i<=n; i++){
        currentSum += i;
        if(currentSum < target){
            set1.push_back(i);
        }
        else if(currentSum == target){
            set1.push_back(i);
            i++;
            break;
        }
        else{
            set1.push_back(i);
            long long extraSum = currentSum - target;
            set1.erase(set1.begin() + extraSum-1);
            set2.push_back(extraSum);
            i++;
            break;
        }
    }

    for(;i<=n; i++){
        set2.push_back(i);
    }

    cout << set1.size() << endl;
    for(int j=0; j < (int)set1.size(); j++){
        cout << set1[j] << " ";
    }
    cout << "\n";
    cout << set2.size() << endl;
    for(int j=0; j < (int)set2.size(); j++){
        cout << set2[j] << " ";
    }
    cout << "\n";

    return 0;
}