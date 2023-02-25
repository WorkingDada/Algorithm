#include <bits/stdc++.h>
using namespace std;
vector<int> lis;
int solve(vector<int> &c){
    for (int i = c.size()-1 ; i >= 0 ; i--){
        for (int j = i ; j < c.size() ; j++){
            if (c[i] < c[j]){
                lis[i] = max(lis[i],lis[j]+1);
            }
        }
    }
    return *max_element(lis.begin(),lis.end());
}

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    lis = vector<int>(n,1);
    for (int i = 0 ; i < n ; i++){
        cin >> c[i];
    }
    cout << solve(c);
}