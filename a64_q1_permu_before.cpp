#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


void permu(int n,int len,vector<bool> &used,map<int,int> &mp,string sol=""){
    if (len < n){
        for (int i=0;i<n;i++){
            if (used[i] == false && (mp.find(i) == mp.end() || used[mp[i]])){
                used[i] = true;
                permu(n,len+1,used,mp,sol+to_string(i)+" ");
                used[i] = false;
            } 
        }
    } else {
        sol.pop_back();
        cout << sol << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    int t1,t2;
    cin >> n >> m;
    vector<bool> used(n,false);
    map<int,int> mp;
    while(m--){
        cin >> t1 >> t2;
        mp[t2] = t1;
    }
    permu(n,0,used,mp);
}
