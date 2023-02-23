#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

void perm(int n,vector<int> &sol,int len,int k){
    if (len < k){
        for (int i = 0 ; i < n ; i++){
            sol[len] = i;
            perm(n,sol,len+1,k);
        }
    } else {
        for (auto &x : sol){
            cout << x;
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,t1,t2;
    cin >> n >> m;
    vector<int> sol(n);
    map<int,int> mp1;
    while (m--){
        cin >> t1 >> t2;
        mp1[t2] = t1;
    }
    perm(n,sol,0,n);
    for (auto &x : mp1){
        cout << x.first << " ";
    }
}